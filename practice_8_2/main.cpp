/*
https://acm.hdu.edu.cn/showproblem.php?pid=2001
*/
#include<iostream>
#include <cmath>
using namespace std;

double distance() {
	double x1, y1, x2, y2;
	while (cin >> x1 >> y1 >> x2 >> y2) {
		double d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
		printf("%.2lf\n", sqrt(d));
	}
	return 0;
}

void main() {
		distance();
}
