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
	int thikness = 3;

	cv::circle(img0,
		center,
		radius,
		color,
		thikness);
		

	cv::imshow("img0",img0);
	cv::waitKey();
}
