#include <iostream>
#include <cmath>
using namespace std;

int aAPowerOf2(){
	int a = 64;
	int b = (a & (a - 1));
	if (b == 0 && a != 0) {
		cout << "这个数是二的"<< log2(a) << "次方" << endl;
	} else {
		cout << "The number is not a power of 2." << endl;
	}
	return 0;
}
