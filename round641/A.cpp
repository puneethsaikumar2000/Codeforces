#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int d = 2;
		while (n % d != 0){
			d += 1;
		}
		int ans = 1;
		if (n == d){
			ans = n + d + (2*(k-1));
			// cout << ans << endl;
		}
		else if (d == 2){
			ans = n + 2*k;
			// cout << ans << endl;
		}
		else if (d % 2 == 1 and n % 2 == 1){
			// both are odd
			ans = n + d + (2*(k-1));
		}
		cout << ans << endl;
	}
	return 0;
}