#include <iostream>
#include <opencv2\highgui.hpp>
#include <thread>



using namespace std;
using namespace cv;



class videocapture {

public:
	Mat frame;
	VideoCapture cap;
	void operator()()
	{
	if (!cap.open(0))
		cout << "Camera not found";
	for (;;)
	{
		cap >> frame;
		imshow("this is you, smile! :)", frame);
		if (waitKey(1) == 27) break; // stop capturing by pressing ESC 
	}
}

};

//int main()
//{
//	
//	//thread t1(cameraCapture);
//	//t1.join();
//	return 0;
//}



