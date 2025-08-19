/*
https://acm.hdu.edu.cn/showproblem.php?pid=1092
*/
#include<iostream>
using namespace std;
int main() {
	int n, a, sum;
	while (cin >> n && n) {
		sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> a;
			sum += a;
		}
		cout << sum << endl;
	
	}
	return 0;
}