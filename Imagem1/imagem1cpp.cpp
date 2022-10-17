#include<iostream>
#include<fstream> // Read and Write Images

using namespace std;

int main() {
	// Create a PPM image
	ofstream image;

	image.open("./images/RGB-1.ppm");
	if (image.is_open()) {
		//Header
		image << "P3" << endl; //Image type
		image << "100 100" << endl; // Width and Height
		image << "255" << endl; //Maximum value

		//Image Loop
		for (int ImgH = 0; ImgH < 100; ImgH++) {
			for (int ImgV = 0; ImgV < 100; ImgV++) {
				image << "255 0 0" << endl; //RED
			}
		}



		/*	//Image content
			image << "255 0 0" << endl; //RED
			image << "0 255 0" << endl; //GREEN
			image << "0 0 255" << endl; //BLUE
			image << "255 255 0" << endl;//YELLOW
			image << "255 255 255" << endl; //WHITE
			image << "0 0 0" << endl; //BLACK
			image << "0 0 0" << endl; //BLACK
			image << "0 0 0" << endl; //BLACK
			*/
	}

	image.close();
}