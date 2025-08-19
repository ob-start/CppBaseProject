#include <iostream>
using namespace std;
#define X 5 + 5
#define Y (5 + 5)
int main() {

	cout << X * X << endl; // This will output 35, not 100
	cout << Y * Y << endl; // This will output 100, as expected

	int a = 5;
	const int b = 5;
	a = a + 10; // This is allowed, as 'a' is not a constant
	b = 10; // This will cause a compilation error, as 'b' is a constant
	return 0;
}