#include "barcode.h"
#include <iostream>

using namespace std;

const int width = 255, height = 255;

int main()
{
	/*ofstream img("qr.ppm");
	img << "P3" << endl;
	img << width << " " << height << endl;
	img << "255" << endl;

	for (int y = 0; y < height; y++) {
		for (int x = 0; x < width; x++) {
			int r, g, b;
			r = x % 255;
			g = y % 255;
			b = y * x % 255;

			img << r << " " << g << " " << b << endl;
		}
	}*/

	string data = "BY: IZANBF1803";

	barcode bc(data, CodeSet::A);

	bc.generateBarCode("barcode_example.ppm", 10, 500);

	cin.ignore();

	return 0;
}