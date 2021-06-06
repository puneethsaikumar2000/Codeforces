#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int div = 1, div_min = 1;
		for (int i = 2; i <= sqrt(n); ++i)
		{
			if (n % i == 0){
				if (i <= k){
					div = max(div, i);
				}
				if (n / i <= k){
					div = max(div, n / i);
				}
			}
		}
		if (k >= n)
			cout << 1 << endl;
		else
			cout << (n / div) << endl;
	}
	return 0;
}