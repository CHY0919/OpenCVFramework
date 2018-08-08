#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(int argc, char** argv){

	cout << "Hello World!" << endl;
	Mat image = imread("./resource/Lenna.png");
	imshow("Lenna", image);

	Mat gray_image;
	cvtColor(image, gray_image, CV_BGR2GRAY);
	imshow("Gray_Lenna", gray_image);
	waitKey(0);
}