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

	cv::imshow("img1",img1);
	cv::imshow("img0",img0);
	cv::waitKey();
}
