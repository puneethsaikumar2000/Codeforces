#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int m[n][n];
		for (int i = 0; i < n; ++i)
		{
			string s;
			cin >> s;
			for (int j = 0; j < n; ++j)
			{
				if (s[j] == '1')
					m[i][j] = 1;
				else
					m[i][j] = 0;
				// m[i][j] = int(s[j]);
				// cout << m[i][j] << " ";
			}
			// cout << endl;
		}
		bool ans = true;
		for (int i = 0; i < n-1; ++i)
		{
			for (int j = 0; j < n-1; ++j)
			{
				// printf("%i %i %i\n", m[i][j], m[i+1][j], m[i][j+1]);
				if (m[i][j] == 1){
					if (m[i+1][j] != 1 and m[i][j+1] != 1){
						ans = false;
						break;
					}
				}
			}
		}
		if (ans or n == 1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}