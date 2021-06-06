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
		long long int sum = 1;
		// int ans = 0;
		for (int i = 0; i < n; ++i)
		{
			if (v[i] <= i+1){
				sum = i + 2;
			}
		}
		cout << sum << endl;
	}
	return 0;
}