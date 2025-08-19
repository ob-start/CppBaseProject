/*
 https://acm.hdu.edu.cn/showproblem.php?pid=2003
*/
#include<iostream>
using namespace std;
void absolute(double a) {

	printf("%.2f",(a >= 0 ? a : -a));
}
int main() {
	double a;
	while (cin >> a) {
		absolute(a);
	}
	return 0;
}