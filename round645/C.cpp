#include <bits/stdc++.h>
using namespace std;

void solve(int m, int n){
	long double num = 1;
	long double den = 1;
	// long long int ans = 1;
	for (int i = 1; i <= n; ++i)
	{
		num = num * (m + i);
		// den = den * i;
		num = num / i;
		// while (num % den == 0 and den <= n){
		// 	num = num / den;
		// 	den += 1;
		// }

	}
	// while (den <= n){
	// 	num = num / den;
	// 	den += 1;
	// }
	cout << num << endl;
}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		int m = x2 - x1;
		int n = y2 - y1;
		// solve(m, n);
		cout << (m*n) + 1 << endl;
	}
	return 0;
}