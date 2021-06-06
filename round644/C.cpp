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
		int odds = 0, evens = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> v[i];
			if (v[i] % 2 == 0){
				evens += 1;
			}
			else{
				odds += 1;
			}
		}
		sort(v.begin(), v.end());
		bool diff = false;
		for (int i = 1; i < n; ++i)
		{
			if (v[i] - v[i-1] == 1){
				diff = true;
			}
		}
		if (evens % 2 == 0){
			cout << "YES" << endl;
		}
		else if (diff){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}