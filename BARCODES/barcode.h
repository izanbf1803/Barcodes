#ifndef __BARCODE_H__
#define __BARCODE_H__

#include "barcode_definitions.h"
#include <vector>

using namespace std;


enum CodeSet { A, B, C };

struct element_t {
	string value;
	string A;
	string B;
	string C;
	string bits;

	element_t(string value, string a, string b, string c, string bits) : value(value), A(a), B(b), C(c), bits(bits) {};
};

class barcode
{
public:
	barcode::barcode(string data, CodeSet type);	
	~barcode();

	vector<vector<unsigned char> > bars;
	vector<element_t*>* C128;
private:
	void init_C128();

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