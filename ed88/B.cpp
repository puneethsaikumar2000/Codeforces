#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;

#define pb push_back;
#define mp make_pair;
#define ff first;
#define ss second;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int n, m, x, y;
		cin >> n >> m >> x >> y;
		int sq[n][m];
		int white = 0;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				char c;
				cin >> c;
				if (c == '.'){
					sq[i][j] = 1;
					white += 1;
				}
				else{
					sq[i][j] = 0;
				}
			}
		}
		if (2*x <= y){
			cout << x*white << endl;
			continue;
		}
		int whites = 0;
		lli sum = 0;
		for (int i = 0; i < n; ++i)
		{
			whites = 0;
			for (int j = 0; j < m; ++j)
			{
				if (sq[i][j] == 1){
					whites += 1;
					if (whites == 2){
						sum += y;
						whites = 0;
					}
				}
				else{
					if (whites == 1){
						sum += x;
						whites = 0;
					}
				}
			}
			if (whites == 1){
				sum += x;
			}
		}
		cout << sum << endl;
	}
	return 0;
}
