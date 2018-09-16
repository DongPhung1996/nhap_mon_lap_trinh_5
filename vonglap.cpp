#include <iostream>
using namespace std;
int main() {
	int n;
	int sum = 0;
//	n = 678
//	t = n % 10;
//	sum += t; sum = 8;
//	n = n / 10;
//	n = 67
//	t = n % 10;
//	sum += t; sum = 15;
//	n = n / 10
//	n = 6
//	t = n % 10;
//	sum += t; sum = 21
	cin >> n;
	int min = 9;
	while(n > 0) {
		int t = n % 10; 
		if(t < min)
			min = t;
		n = n / 10;
	}
	cout << min;
}
