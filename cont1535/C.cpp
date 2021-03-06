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

#define int long long

void solve(){
	string s;
	cin >> s;
	int n = s.length();
	int dp[n+1][2];
	dp[0][0] = dp[0][1] = 0;
	int ans = 0;
	for (int i = 1; i <= n; i++){
		if (s[i - 1] == '?'){
			dp[i][0] = dp[i-1][1] + 1;
			dp[i][1] = dp[i-1][0] + 1;
		}
		else if (s[i - 1] == '0'){
			dp[i][0] = dp[i-1][1] + 1;
			dp[i][1] = 0;
		}
		else{
			dp[i][0] = 0;
			dp[i][1] = dp[i-1][0] + 1;
		}
		ans += max(dp[i][0], dp[i][1]);
	}
	cout << ans << endl;
}

signed main(int argc, char const *argv[])
{
    fastio;
    int t = 1;
    cin >> t;
    while(t--){
    	solve();
    }
    return 0;
}

