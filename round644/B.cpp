#include <bits/stdc++.h>
using namespace std;

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
		sort(v.begin(), v.end());
		int ans = 1000;
		for (int i = 1; i < n; ++i)
		{
			ans = min(ans, v[i] - v[i-1]);
		}
		cout << ans << endl;
	}
	return 0;
}