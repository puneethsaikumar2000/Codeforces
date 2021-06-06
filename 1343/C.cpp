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
		cin >> v[0];
		int prev = v[0];
		long long int sum = 0;
		for (int i = 1; i < n; ++i){
			cin >> v[i];
			// long long int mult = prev*v[i];
			if ((prev < 0 and v[i] > 0) or (prev > 0 and v[i] < 0)){
				sum += prev;
				prev = v[i];
			}
			else{
				prev = max(prev, v[i]);
			}
		}
		sum += prev;
		cout << sum << endl;

	}
	return 0;
}