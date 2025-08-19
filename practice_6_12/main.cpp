/*
https://acm.hdu.edu.cn/showproblem.php?pid=2075
*/
#include<iostream>
using namespace std;
int main() {
	int t, x, y;
	cin >> t;
	while (t--) {
		cin >> x >> y;
		/*
				
		switch (x % y){
			case 0:
				cout << "YES" << endl;
			break;
			default:
				cout << "NO" << endl;
		}

		*/
		cout << (((x % y) == 0) ? "YES" : "NO") << endl;

	}
	
	return 0;
}