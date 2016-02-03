#include <iostream>
#include <opencv2\highgui.hpp>
#include <thread>


using namespace std;
using namespace cv;

void cameraCapture() {
	VideoCapture cap;
	if (!cap.open(0))
		cout << "Camera not found";
	for (;;)
	{
		Mat frame;
		cap >> frame;
		imshow("this is you, smile! :)", frame);
		if (waitKey(1) == 27) break; // stop capturing by pressing ESC 
	}
}

int main(int argc, char** argv)
{

	
	thread t1(cameraCapture);
	t1.join();
	return 0;
}