#include <iostream>
#include <opencv2/opencv.hpp>
#include <thread>

using namespace std;
using namespace cv;

class UVCInput
{
public:
	UVCInput();
	~UVCInput();
	void startCapture(int);
	Mat GetFrame();

	VideoCapture cam;

private:
	Mat frame;
};

UVCInput::UVCInput()
{
}

UVCInput::~UVCInput()
{
}

void UVCInput::startCapture(int i) {
	cam.open(i);
	while (true) {
		if (cam.isOpened)
			cam >> frame;
	}
}

Mat UVCInput::GetFrame() {
	return frame;
}