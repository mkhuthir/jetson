#include <opencv2/core/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

int main()
{
	cv::Mat img0;

	img0.create(480, 640, CV_8UC1);

	img0.setTo(0);

	cv::Point center(img0.cols/2,img0.rows/2);

	int radius = img0.rows/2;
	int color = 128;
	int color2= 255;
	int thikness = 3;

	cv::circle(img0,
		center,
		radius,
		color,
		thikness);

//	cv::Mat img1=img0;
	cv::Mat img1;
	img0.copyTo(img1);

	cv::rectangle(img1,
		center - cv::Point(radius,radius),
		center + cv::Point(radius,radius),
		color2,
		thikness);


	cv::Mat img2;
	cv::cvtColor(img1,img2,CV_GRAY2BGR);

	int inscribed_radius = radius / sqrt(2);

	cv::Rect rect(
		center + cv::Point(inscribed_radius, inscribed_radius),
		center - cv::Point(inscribed_radius, inscribed_radius));

	cv::Mat roi = img2(rect);

	roi.setTo(cv::Scalar(0,185,118));

	for (int y=0; y<img1.rows; y++)
	{
		uchar *row = img1.ptr<uchar>(y);
		for (int x=0; x<img1.cols;x++)
		{
			if (row[x]==128)
				row[x] = x * y * 255 / img1.total();
		}
	}

	for (int y=0; y<img2.rows; y++)
	{
		cv::Vec3b *row = img2.ptr<cv::Vec3b>(y);
		for (int x=0; x<img2.cols;x++)
		{
			if (row[x][1]==185)
				row[x] = cv::Vec3b(0,x * y * 255 / img2.total(),118);
		}
	}


	cv::imshow("img0",img0);
	cv::imshow("img1",img1);
	cv::imshow("img2",img2);

	cv::waitKey();
}
