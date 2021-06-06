#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int n, m, a, b;
		cin >> n >> m >> a >> b;
		if ((m*1.0) / a != (n*1.0) / b){
			cout << "NO" << endl;
			continue;
		}
		else if (a == m){
			cout << "YES" << endl;
			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < m; ++j)
				{
					cout << 1;
				}
				cout << endl;
			}
		}
		else{
			cout << "YES" << endl;
			int ind = 1;
			string s;
			while (ind <= m){
				// cout << 1;
				ind += 1;
				s = s + "1";
				if (ind > m)
					break;
				for (int j = 1; j <= a; j++){
					// cout << 0;
					s = s + "0";
					ind += 1;
					if (ind > m)
						break;
				}
			}
			// cout << endl;
			cout << s << endl;
			for (int i = 1; i < n; ++i)
			{
				s = s.substr(n-1) + s.substr(0,n-1);
				cout << s << endl;
			}
		}
	}
	return 0;
}