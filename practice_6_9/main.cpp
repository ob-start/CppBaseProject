/*
https://acm.hdu.edu.cn/showproblem.php?pid=1096
*/
#include<iostream>
using namespace std;
int main() {
	int t, n, x,sum;
	cin >> t;
	while (t--) {
		sum = 0;
		cin >> n;
		while (n--) {
			cin >> x;
			sum += x;
		}
		cout << sum << endl << endl;
	}


	return 0;
}