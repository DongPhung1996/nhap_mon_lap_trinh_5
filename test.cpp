#include <iostream>
#include <cmath> 
using namespace std;
int main() {
	int a;
	cin >> a;
	int h = ceilf(a/60);
	cout << h;
	int m = ceilf(a%60);
	cout << endl <<m;
}
