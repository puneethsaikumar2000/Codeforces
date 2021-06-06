#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v(n+1, 0);
		for (int i = 1; i <= n; ++i)
		{
			cin >> v[i];
		}

		vector<int> dp(n+1, 1);
		dp[0] = 0;
		dp[1] = 1;
		// if (v[1] < v[2]){
		// 	dp[2] = 2;
		// }
		// for (int i = 2; i <= n; ++i)
		// {
		// 	if (v[1] < v[i])
		// 		dp[i] = 2;
		// }
		for (int i = 2; i <= n; ++i)
		{
			// vector<int> d;
			// int div = 2;
			// printf("i: %i v[i]: %i\n", i, v[i]);
			for (int div = 1; div < i; div++){
				if (i % div == 0 and v[div] < v[i]){
					// printf("div::%i\n", div);
					// if (1 + dp[i/div] > dp[i]){
						// printf("max found :: dp[%i] of %i than %i \n", div, 1 + dp[div], dp[i]);
					// }
					dp[i] = max(dp[i], 1 + dp[div]);
				}
				// div += 1;
			}
			// printf("dp[i]: %i\n", dp[i]);
		}
		int ans = 0;
		for (int i = 1; i <= n; ++i)
		{
			ans = max(ans, dp[i]);
		}
		cout << ans << endl;
	}
	return 0;
}