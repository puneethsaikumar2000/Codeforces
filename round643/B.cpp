#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long int lli;
typedef unsigned long long int ulli;
typedef pair<int,int> pii;

#define pb push_back;
#define mk make_pair;
#define ff first;
#define ss second;

void max_groups(vi &dp, int n, int k){
	int ans = 0;
	int idx = k;
	while (idx < dp.size()){
		ans += 1;
		idx += v[k];
		if (idx > dp.size())
			ans -= 1;
	}
	if (n ==)
	for (int i = k; i < dp.size(); ++i)
	{
		if (dp[n-1] == 0){
			max_groups(dp, n, i);
		}
		dp[n] = max(dp[n-1], dp[n-v[i]]);
	}
}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; ++i)
		{
			cin >> v[i];
		}
		vector<int> dp(n, 0);
		sort(v.begin(), v.end(),greater<int>());
		max_groups(dp, n, 0);
	}
	return 0;
}