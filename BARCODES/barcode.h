#ifndef __BARCODE_H__
#define __BARCODE_H__

#include "barcode_definitions.h"
#include <vector>
#include <sstream>
#include <bitset>
#include <iostream>	// REMOVE

using namespace std;


int s_to_i(string s);
string i_to_s(int i);

enum CodeSet { A, B, C };

struct element_t {
	string value;
	string A;
	string B;
	string C;
	string bits;

	element_t(string value, string a, string b, string c, string bits) : value(value), A(a), B(b), C(c), bits(bits) {};
	element_t() {};
};

class barcode
{
public:
	barcode::barcode(string data, CodeSet type);	
	~barcode();

	vector<element_t*>* C128;
private:
	void init_C128();
	void format();
	void generateBarCode(string out_file, int bar_width, int bar_hegight);
	int getCharValue(string c, CodeSet type);
	string getCharBits(string c, CodeSet type);
	string getValBits(string val);

	string formattedData;
	element_t startAElement;
	element_t startBElement;
	element_t startCElement;
	element_t codeAElement;
	element_t codeBElement;
	element_t codeCElement;
	element_t codeStop;
	string data;
	CodeSet type;
};

#endif