#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

int main()
{
	cv::Mat img(512, 512, CV_8UC3, cv::Scalar(0));

	cv::putText(img,
		"Hello, OpenCV on Jetson",
		cv::Point(10, img.rows /2),
		cv::FONT_HERSHEY_DUPLEX,
		1.0,
		CV_RGB(118, 185, 0),
		2);

	cv::imshow("Hello!",img);
	cv::waitKey();
}
