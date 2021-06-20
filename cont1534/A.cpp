#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ff first
#define ss second
#define pb push_back
#define mk make_pair
#define maxn 300005
#define mod 1000000007
#define inf 1000000007
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define REPN(i, n) for (int i = 0; i < n; i++)
#define SQ(a) (a)*(a) // a * a then it gives wrong for 3 + 3 = >   3 + 3 * 3 + 3.

typedef long long int lli;
typedef unsigned long long int ulli;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<lli> vlli;
typedef map<int, int> mii;
typedef vector<vi> vvi;
typedef vector<pii> vpii;

void solve1(){
	int n, m;
	cin >> n >> m;
	char g[n + 2][m + 2];
	int x = -1, y = -1;
	char c = '.';
	REPN(i, n){
		REPN(j, m){
			cin >> g[i + 1][j + 1];
			if (g[i + 1][j + 1] != '.'){
				x = i;
				y = j;
				c = g[i + 1][j + 1];
			}
		}
	}
	if (x == -1 and y == -1 and c == '.'){
		cout << "YES" << endl;
		for (int i = 1; i <= n; ++i){
			char c1;
			for (int j = 1; j <= m; ++j){
				c1 = ((i + j) % 2) ? 'R' : 'W';
				cout << c1;
			}
			cout << endl;
		}
		return;
	}
	bool pos = true;
	for (int i = 1; i <= n and pos; ++i){
		for (int j = 1; j <= m and pos; ++j){
			int di = 1;
			int dj = 1;
			if (g[i][j] == 'R'){
				if (g[i - 1][j] == 'R' or g[i + 1][j] == 'R' or g[i][j - 1] == 'R' or g[i][j + 1] == 'R'){
					pos = false;
					break;
				}
				else{
					g[i - 1][j] = g[i + 1][j] = g[i][j - 1] = g[i][j + 1] = 'W';
				}
			}
			else if (g[i][j] == 'W'){
				if (g[i - 1][j] == 'W' or g[i + 1][j] == 'W' or g[i][j - 1] == 'W' or g[i][j + 1] == 'W'){
					pos = false;
					break;
				}
				else{
					g[i - 1][j] = g[i + 1][j] = g[i][j - 1] = g[i][j + 1] = 'R';
				}
			}
		}
	}
	if (!pos){
		cout << "NO" << endl;
		return;
	}
	x++;
	y++;
	cout << "YES" << endl;
	for (int i = 1; i <= n and pos; ++i){
		char c1;
		for (int j = 1; j <= m and pos; ++j){
			c1 = (((i + j) % 2) == ((x + y) % 2)) ? c : (c == 'R')? 'W':'R' ;
			cout << c1;
		}
		cout << endl;
	}
}


void solve(){
	int n, m;
	cin >> n >> m;
	char g[n + 2][m + 2];
	int dots = 0;
	REPN(i, n){
		REPN(j, m){
			cin >> g[i + 1][j + 1];
			if (g[i + 1][j + 1] == '.') dots++;
		}
	}
	bool pos = true;
	char ans[n][m];
	for (int i = 0; i < n + 2; ++i){
		g[i][0] = '.';
		g[i][m + 1] = '.';
	}
	for (int j = 0; j < m + 2; ++j){
		g[0][j] = '.';
		g[n + 1][j] = '.';
	}
	if (dots == n*m){
		cout << "YES" << endl;
		for (int i = 1; i <= n; ++i){
			char c = i % 2 ? 'R' : 'W';
			char c2 = i % 2 ? 'W' : 'R';
			for (int j = 1; j <= m; ++j){
				char c1 = j % 2 ? c : c2;
				cout << c1;
			}
			cout << endl;
		}
		return ;
	}
	while (dots != 0 and pos){
		for (int i = 1; i <= n and pos; ++i){
			for (int j = 1; j <= m and pos; ++j){
				int di = 1;
				int dj = 1;
				if (g[i][j] == 'R'){
					if (g[i - 1][j] == 'R' or g[i + 1][j] == 'R' or g[i][j - 1] == 'R' or g[i][j + 1] == 'R'){
						pos = false;
						break;
					}
					else{
						g[i - 1][j] = g[i + 1][j] = g[i][j - 1] = g[i][j + 1] = 'W';
					}
				}
				else if (g[i][j] == 'W'){
					if (g[i - 1][j] == 'W' or g[i + 1][j] == 'W' or g[i][j - 1] == 'W' or g[i][j + 1] == 'W'){
						pos = false;
						break;
					}
					else{
						g[i - 1][j] = g[i + 1][j] = g[i][j - 1] = g[i][j + 1] = 'R';
					}
				}
			}
		}
		dots = 0;
		for (int i = 1; i <= n; ++i){
			for (int j = 1; j <= m; ++j){
				if (g[i][j] == '.') dots++;
			}
		}
	}
	if (!pos){
		cout << "NO" << endl;
		return;
	}
	cout << "YES" << endl;
	for (int i = 1; i <= n; ++i){
		for (int j = 1; j <= m; ++j){
			cout << g[i][j];
		}
		cout << endl;
	}
}

void solve3() {
	int n, m;
	cin >> n >> m;
	char a[n][m];
	char b[n][m];
	char g[n][m];
	int c[n][m];
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){
			a[i][j] = ((i + j) % 2)? 'R' : 'W';
			b[i][j] = ((i + j) % 2)? 'W' : 'R';
		}
	}
	bool zero = false, one = false;
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){
			cin >> g[i][j];
			if (g[i][j] == a[i][j]){
				c[i][j] = 0;
				zero = true;
			}
			else if (g[i][j] == b[i][j]){
				c[i][j] = 1;
				one = true;
			}
			else{
				c[i][j] = -1;
			}
		}
	}
	if (one && zero){
		cout << "NO\n";
		return;
	}
	else if (!one && !zero){
		cout << "YES\n";
		for(int i = 0; i < n; ++i){
			for (int j = 0; j < m; ++j){
				cout << a[i][j];
			}
			cout << "\n";
		}
	}
	else{
		cout << "YES\n";
		for(int i = 0; i < n; ++i){
			for (int j = 0; j < m; ++j){
				cout << ((one)? b[i][j] : a[i][j]);
			}
			cout << "\n";
		}
	}
}

int main(int argc, char const *argv[])
{
    fastio;
    int t = 1;
    cin >> t;
    while(t--){
    	solve3();
    }
    return 0;
}

