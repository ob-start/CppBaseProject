/*
https://acm.hdu.edu.cn/showproblem.php?pid=2006
*/
#include<iostream>
using namespace std;
int main() {
	int arr[100000];
	int n;
	
	while (cin >> n) {
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int prod = 1;
		for (int i = 0; i < n; i++) {
			if (arr[i] % 2 ) {
				prod *= arr[i];
			}
			
		}
		cout << prod << endl;
	}

	return 0;
}