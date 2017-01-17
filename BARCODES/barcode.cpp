#include "barcode.h"



barcode::barcode(string data, CodeSet type)
{
	this->data = data;
	this->type = type;

	this->init_C128();
}


barcode::~barcode()
{
}

void barcode::init_C128()
{
	this->C128 = new vector<element_t*>(107);

	(*this->C128)[0]   = new element_t("0", " ", " ", "00", "11011001100");
	(*this->C128)[1]   = new element_t("1", "!", "!", "01", "11001101100");
	(*this->C128)[2]   = new element_t("2", "\"", "\"", "02", "11001100110");
	(*this->C128)[3]   = new element_t("3", "#", "#", "03", "10010011000");
	(*this->C128)[4]   = new element_t("4", "$", "$", "04", "10010001100");
	(*this->C128)[5]   = new element_t("5", "%", "%", "05", "10001001100");
	(*this->C128)[6]   = new element_t("6", "&", "&", "06", "10011001000");
	(*this->C128)[7]   = new element_t("7", "'", "'", "07", "10011000100");
	(*this->C128)[8]   = new element_t("8", "(", "(", "08", "10001100100");
	(*this->C128)[9]   = new element_t("9", ")", ")", "09", "11001001000");
	(*this->C128)[10]  = new element_t("10", "*", "*", "10", "11001000100");
	(*this->C128)[11]  = new element_t("11", "+", "+", "11", "11000100100");
	(*this->C128)[12]  = new element_t("12", ",", ",", "12", "10110011100");
	(*this->C128)[13]  = new element_t("13", "-", "-", "13", "10011011100");
	(*this->C128)[14]  = new element_t("14", ".", ".", "14", "10011001110");
	(*this->C128)[15]  = new element_t("15", "/", "/", "15", "10111001100");
	(*this->C128)[16]  = new element_t("16", "0", "0", "16", "10011101100");
	(*this->C128)[17]  = new element_t("17", "1", "1", "17", "10011100110");
	(*this->C128)[18]  = new element_t("18", "2", "2", "18", "11001110010");
	(*this->C128)[19]  = new element_t("19", "3", "3", "19", "11001011100");
	(*this->C128)[20]  = new element_t("20", "4", "4", "20", "11001001110");
	(*this->C128)[21]  = new element_t("21", "5", "5", "21", "11011100100");
	(*this->C128)[22]  = new element_t("22", "6", "6", "22", "11001110100");
	(*this->C128)[23]  = new element_t("23", "7", "7", "23", "11101101110");
	(*this->C128)[24]  = new element_t("24", "8", "8", "24", "11101001100");
	(*this->C128)[25]  = new element_t("25", "9", "9", "25", "11100101100");
	(*this->C128)[26]  = new element_t("26", ":", ":", "26", "11100100110");
	(*this->C128)[27] = new element_t("27", ";", ";", "27", "11101100100");
	(*this->C128)[28]  = new element_t("28", "<", "<", "28", "11100110100");
	(*this->C128)[29]  = new element_t("29", "=", "=", "29", "11100110010");
	(*this->C128)[30]  = new element_t("30", ">", ">", "30", "11011011000");
	(*this->C128)[31]  = new element_t("31", "?", "?", "31", "11011000110");
	(*this->C128)[32]  = new element_t("32", "@", "@", "32", "11000110110");
	(*this->C128)[33]  = new element_t("33", "A", "A", "33", "10100011000");
	(*this->C128)[34]  = new element_t("34", "B", "B", "34", "10001011000");
	(*this->C128)[35]  = new element_t("35", "C", "C", "35", "10001000110");
	(*this->C128)[36]  = new element_t("36", "D", "D", "36", "10110001000");
	(*this->C128)[37]  = new element_t("37", "E", "E", "37", "10001101000");
	(*this->C128)[38]  = new element_t("38", "F", "F", "38", "10001100010");
	(*this->C128)[39]  = new element_t("39", "G", "G", "39", "11010001000");
	(*this->C128)[40]  = new element_t("40", "H", "H", "40", "11000101000");
	(*this->C128)[41]  = new element_t("41", "I", "I", "41", "11000100010");
	(*this->C128)[42]  = new element_t("42", "J", "J", "42", "10110111000");
	(*this->C128)[43]  = new element_t("43", "K", "K", "43", "10110001110");
	(*this->C128)[44]  = new element_t("44", "L", "L", "44", "10001101110");
	(*this->C128)[45]  = new element_t("45", "M", "M", "45", "10111011000");
	(*this->C128)[46]  = new element_t("46", "N", "N", "46", "10111000110");
	(*this->C128)[47]  = new element_t("47", "O", "O", "47", "10001110110");
	(*this->C128)[48]  = new element_t("48", "P", "P", "48", "11101110110");
	(*this->C128)[49]  = new element_t("49", "Q", "Q", "49", "11010001110");
	(*this->C128)[50]  = new element_t("50", "R", "R", "50", "11000101110");
	(*this->C128)[51]  = new element_t("51", "S", "S", "51", "11011101000");
	(*this->C128)[52]  = new element_t("52", "T", "T", "52", "11011100010");
	(*this->C128)[53]  = new element_t("53", "U", "U", "53", "11011101110");
	(*this->C128)[54]  = new element_t("54", "V", "V", "54", "11101011000");
	(*this->C128)[55]  = new element_t("55", "W", "W", "55", "11101000110");
	(*this->C128)[56]  = new element_t("56", "X", "X", "56", "11100010110");
	(*this->C128)[57]  = new element_t("57", "Y", "Y", "57", "11101101000");
	(*this->C128)[58]  = new element_t("58", "Z", "Z", "58", "11101100010");
	(*this->C128)[59]  = new element_t("59", "[", "[", "59", "11100011010");
	(*this->C128)[60]  = new element_t("60", "\\", "\\", "60", "11101111010");
	(*this->C128)[61]  = new element_t("61", "]", "]", "61", "11001000010");
	(*this->C128)[62]  = new element_t("62", "^", "^", "62", "11110001010");
	(*this->C128)[63]  = new element_t("63", "_", "_", "63", "10100110000");
	(*this->C128)[64]  = new element_t("64", NUL, "`", "64", "10100001100");
	(*this->C128)[65]  = new element_t("65", SOH, "a", "65", "10010110000");
	(*this->C128)[66]  = new element_t("66", STX, "b", "66", "10010000110");
	(*this->C128)[67]  = new element_t("67", ETX, "c", "67", "10000101100");
	(*this->C128)[68]  = new element_t("68", EOT, "d", "68", "10000100110");
	(*this->C128)[69]  = new element_t("69", ENQ, "e", "69", "10110010000");
	(*this->C128)[70]  = new element_t("70", ACK, "f", "70", "10110000100");
	(*this->C128)[71]  = new element_t("71", BEL, "g", "71", "10011010000");
	(*this->C128)[72]  = new element_t("72", BS, "h", "72", "10011000010");
	(*this->C128)[73]  = new element_t("73", TAB, "i", "73", "10000110100");
	(*this->C128)[74]  = new element_t("74", LF, "j", "74", "10000110010");
	(*this->C128)[75]  = new element_t("75", VT, "k", "75", "11000010010");
	(*this->C128)[76]  = new element_t("76", FF, "l", "76", "11001010000");
	(*this->C128)[77]  = new element_t("77", CR, "m", "77", "11110111010");
	(*this->C128)[78]  = new element_t("78", SO, "n", "78", "11000010100");
	(*this->C128)[79]  = new element_t("79", SI, "o", "79", "10001111010");
	(*this->C128)[80]  = new element_t("80", DLE, "p", "80", "10100111100");
	(*this->C128)[81]  = new element_t("81", DC1, "q", "81", "10010111100");
	(*this->C128)[82]  = new element_t("82", DC2, "r", "82", "10010011110");
	(*this->C128)[83]  = new element_t("83", DC3, "s", "83", "10111100100");
	(*this->C128)[84]  = new element_t("84", DC4, "t", "84", "10011110100");
	(*this->C128)[85]  = new element_t("85", NAK, "u", "85", "10011110010");
	(*this->C128)[86]  = new element_t("86", SYN, "v", "86", "11110100100");
	(*this->C128)[87]  = new element_t("87", ETB, "w", "87", "11110010100");
	(*this->C128)[88]  = new element_t("88", CAN, "x", "88", "11110010010");
	(*this->C128)[89]  = new element_t("89", EM, "y", "89", "11011011110");
	(*this->C128)[90]  = new element_t("90", SUB, "z", "90", "11011110110");
	(*this->C128)[91]  = new element_t("91", ESC, "{", "91", "11110110110");
	(*this->C128)[92]  = new element_t("92", FS, "|", "92", "10101111000");
	(*this->C128)[93]  = new element_t("93", GS, "}", "93", "10100011110");
	(*this->C128)[94]  = new element_t("94", RS, "~", "94", "10001011110");
	(*this->C128)[95]  = new element_t("95", US, DEL, "95", "10111101000");
	(*this->C128)[96]  = new element_t("96", FNC3, FNC3, "96", "10111100010");
	(*this->C128)[97]  = new element_t("97", FNC2, FNC2, "97", "11110101000");
	(*this->C128)[98]  = new element_t("98", SHIFT, SHIFT, "98", "11110100010");
	(*this->C128)[99]  = new element_t("99", CODE_C, CODE_C, "99", "10111011110");
	(*this->C128)[100] = new element_t("100", CODE_B, FNC4, CODE_B, "10111101110");
	(*this->C128)[101] = new element_t("101", FNC4, CODE_A, CODE_A, "11101011110");
	(*this->C128)[102] = new element_t("102", FNC1, FNC1, FNC1, "11110101110");
	(*this->C128)[103] = new element_t("103", START_A, START_A, START_A, "11010000100");
	(*this->C128)[104] = new element_t("104", START_B, START_B, START_B, "11010010000");
	(*this->C128)[105] = new element_t("105", START_C, START_C, START_C, "11010011100");
	(*this->C128)[106] = new element_t("106", STOP, STOP, STOP, "1100011101011");

	this->startAElement = element_t("103", START_A, START_A, START_A, "11010000100");
	this->startBElement = element_t("104", START_B, START_B, START_B, "11010010000");
	this->startCElement = element_t("105", START_C, START_C, START_C, "11010011100");
	this->codeAElement  = element_t("101", FNC4, CODE_A, CODE_A, "11101011110");
	this->codeBElement  = element_t("100", CODE_B, FNC4, CODE_B, "10111101110");
	this->codeCElement  = element_t("99", CODE_C, CODE_C, "99", "10111011110");
	this->codeStop = element_t("", STOP, STOP, STOP, "11000111010");
}