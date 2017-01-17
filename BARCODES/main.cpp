#include "barcode.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <bitset>

using namespace std;

const int width = 255, height = 255;

#define BLACK 1
#define WHITE 0
#define B_COLOR "0 0 0"
#define W_COLOR "255 255 255"

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

	string data = "izanbf1803";

	barcode bc(data, CodeSet::A);



	return 0;
}