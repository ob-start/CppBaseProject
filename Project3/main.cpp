#include <iostream>
using namespace std;
/*
short       2 bytes		00			2^16	(-2^15 - 2^15-1)
int         4 bytes		0000		2^32	(-2^31 - 2^31-1)
long        4 bytes		0000		2^32	(-2^31 - 2^31-1)
long long   8 bytes		000000000	2^64	(-2^63 - 2^63-1)
float       4 bytes		0000		2^32	(-2^31 - 2^31-1)
double      8 bytes		000000000	2^64	(-2^63 - 2^63-1)
long double 10 bytes	00000000000	2^80	(-2^79 - 2^79-1)
char        1 byte		0			2^8		(-2^7 - 2^7-1)
signed char 1 byte		0			2^8		(-2^7 - 2^7-1)
bool        1 byte		0			2^8		(-2^7 - 2^7-1)
wchar_t     2 bytes		00			2^16	(-2^15 - 2^15-1)
*/
int main() {
	short a = 32768;
	int b = 2147483648; // 2^31=2147483648 is out of range for signed int, will wrap around
	long c = 2147483648; // 2^31=2147483648 is out of range for signed long, will wrap around
	float d = 3.402823466e+38F; // 3.402823466e+38 is the maximum value for float
	bool e = true; // bool can only be true or false, 1 or 0
	char f = 127; // 127 is the maximum value for signed char
	double g = 1.7976931; 

	cout << "short a = " << a << endl; // 2^15=32768 is out of range for signed short, will wrap arounde
	cout << "int b = " << b << endl; // 2^31=2147483648 is out of range for signed int, will wrap around
	cout << "long c = " << c << endl; // 2^31=2147483648 is out of range for signed long, will wrap around
	cout << "float d = " << d << endl; // 3.402823466e+38 is the maximum value for float
	cout << "bool e = " << e << endl; // bool can only be true or false, 1 or 0
	cout << "char f = " << (int)f << endl; // 127 is the maximum value for signed char
	cout << "double g = " << g << endl; // 1.7976931348623157e+308 is the maximum value for double

	cout << sizeof(a) << endl;//sizeof(short) is 2 bytes
	cout << sizeof(b) << endl;//sizeof(int) is 4 bytes
	cout << sizeof(c) << endl;//sizeof(long) is 4 bytes
	cout << sizeof(d) << endl;//sizeof(float) is 4 bytes
	cout << sizeof(e) << endl;//sizeof(bool) is 1 byte
	cout << sizeof(f) << endl;//sizeof(char) is 1 byte
	cout << sizeof(g) << endl;//sizeof(double) is 8 bytes

	return 0;
}