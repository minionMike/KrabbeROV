#include <iostream>
#include <Windows.h>

using namespace std;

class Line
{
public:
	float amplitude = 90;
	

private:
	double length;
};

void sinValues() {

}

void forLoops() {
	while (true) {
		for (int i = 0; i < 100; i++) {
			cout << "Position" << i << endl;
			Sleep(10);
		}
		for (int i = 100; i > 0; i--) {
			cout << "Position" << i << endl;
			Sleep(10);
		}
	}
}

int main() {

	forLoops();
	return 0;

}
