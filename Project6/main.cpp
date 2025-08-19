#include <iostream>
using namespace std;
typedef void(*fptrs) (int a ,int b, char c) ;
void fan1(int a, int b, char c) {
	cout << fan1 << endl;
}
void fan2(int a, int b, char c) {
	cout << fan1 << endl;
}
void fan3(int a, int b, char c) {
	cout << fan1 << endl;
}

fptrs abd[] = { fan1,fan2,fan3 };
int main() {
	char a[3][5] = {
		{"I"},
		{"Love"},
		{"you" }
	};
	char(* p)[5];
	p = a;
	cout << *p << ' ';
	cout << *(p + 1) << ' ';
	cout << *(p + 2) << ' ';

	return 0;
}