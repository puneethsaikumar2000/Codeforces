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

void solve(){
	int R, G, B;
	cin >> R >> G >> B;
	vi r(R), g(G), b(B);
	for (int i = 0; i < R; ++i)
	{
		cin >> r[i];
	}
	for (int i = 0; i < G; ++i)
	{
		cin >> g[i];
	}
	for (int i = 0; i < B; ++i)
	{
		cin >> b[i];
	}

	sort(r.begin(), r.end());
	sort(g.begin(), g.end());
	sort(b.begin(), b.end());

	cout << "r: \n";
	for (auto i : r){
		cout << i << " ";
	}
	cout << "\n g: \n";
	for (auto i : g){
		cout << i << " ";
	}
	cout << "\n b: \n";
	for (auto i : b){
		cout << i << " ";
	}
	cout << "\n";

	int i = R - 1, j = G - 1, k = B - 1;
	lli ans = 0;
	while (i >= 0 and j >= 0 and k >= 0){
		cout << i << " " << j << " " << k << "\n";
		if (r[i] <= g[j] and r[i] <= b[k]){
			ans += (g[j] * b[k]);
			j--;
			k--;
		}
		else if (g[j] <= r[i] and g[j] <= b[k]){
			ans += (r[i] * b[k]);
			i--;
			k--;
		}
		else if (b[k] <= r[i] and b[k] <= g[j]){
			ans += (r[i] * g[j]);
			i--;
			j--;
		}
	}
	if (i == -1){
		while(j >= 0 and k >= 0){
			cout << i << " " << j << " " << k << "\n";
			ans += (g[j] * b[k]);
			j--;
			k--;
		}
	}
	else if (j == -1){
		while(i >= 0 and k >= 0){
			cout << i << " " << j << " " << k << "\n";
			ans += (r[i] * b[k]);
			i--;
			k--;
		}
	}
	else if (k == -1){
		while(i >= 0 and j >= 0){
			cout << i << " " << j << " " << k << "\n";
			ans += (r[i] * g[j]);
			i--;
			j--;
		}
	}
	cout << ans << "\n";
}

void solve1(){
	int R, G, B;
	cin >> R >> G >> B;
	vi r(R), g(G), b(B);
	for (int i = 0; i < R; ++i)
	{
		cin >> r[i];
	}
	for (int i = 0; i < G; ++i)
	{
		cin >> g[i];
	}
	for (int i = 0; i < B; ++i)
	{
		cin >> b[i];
	}

	sort(r.begin(), r.end());
	sort(g.begin(), g.end());
	sort(b.begin(), b.end());

	cout << "r: \n";
	for (auto i : r){
		cout << i << " ";
	}
	cout << "\n g: \n";
	for (auto i : g){
		cout << i << " ";
	}
	cout << "\n b: \n";
	for (auto i : b){
		cout << i << " ";
	}
	cout << "\n";
	
	lli dp[R + 1][G + 1][B + 1] = {0};
	dp[0][0][0] = 0;
	for (int i = 0; i <= B; ++i)
	{
		dp[0][0][i] = 0;
	}
	for (int i = 0; i <= G; ++i)
	{
		dp[0][i][0] = 0;
	}
	for (int i = 0; i <= R; ++i)
	{
		dp[i][0][0] = 0;
	}
	// 0, 0, i = 0;
	// 0, i, 0 = 0;
	// i, 0, 0 = 0;
	for (int i = 1; i <= R; ++i)
	{
		for (int j = 1; j <= G; ++j)
		{
			for (int k = 1; k <= B; ++k)
			{
				// dp[i][j][k] = max(max(dp[i][j][k], (g[j - 1] * b[k - 1]) + dp[i][j - 1][k - 1]),
				// 				  max((r[i - 1] * b[k - 1]) + dp[i - 1][j][k - 1], (r[i - 1] * g[j - 1]) + dp[i - 1][j - 1][k]));
				lli x1, x2, x3;
				x1 = (g[j - 1] * b[k - 1]) + dp[i][j - 1][k - 1];
				x2 = (r[i - 1] * b[k - 1]) + dp[i - 1][j][k - 1];
				x3 = (r[i - 1] * g[j - 1]) + dp[i - 1][j - 1][k];
				dp[i][j][k] = max(x1, max(x2, x3));
				// printf("%i %i %i dp:%lli\n", i, j, k, dp[i][j][k]);
				printf("%i %i %i x1:%lli  x2:%lli  x3:%lli dp:%lli\n", i, j, k, x1, x2, x3, dp[i][j][k]);
			}
		}
	}

	cout << dp[R][G][B] << "\n";
}

int main(int argc, char const *argv[])
{
    fastio;
    // solve();
    solve1();
    // int t;
    // cin >> t;
    // t = 1;
    // while(t--){
    // 	solve();
    // }
    return 0;
}

