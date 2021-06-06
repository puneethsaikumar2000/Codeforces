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
		for (int i = 0; i < n; ++i){
			cin >> v[i];
		}
		map<int, int> m;
		bool twice = false;
		for (int i = 0; i < 2*n; ++i){
			int transfer = i + v[i%n];
			// cout << "i: " << transfer << " " << m.count(transfer) << endl;
			if (m.count(transfer) > 0){
				twice = true;
				break;
			}
			if (m.count(transfer) == 0)
				m[transfer] = i;
		}
		if (twice){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}
	}	
	return 0;
}