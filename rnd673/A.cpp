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
	int n, k;
	cin >> n >> k;
	vi v(n);
	int ans = 0, m = 10000;
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
		m = min(v[i], m);
	}
	int cnt = 0;
	for (int i = 0; i < n; ++i)
	{
		if (v[i] == m){
			cnt++;
			continue;
		}
		ans += (k - v[i]) / m;
	}
	ans += (cnt - 1) * ((k - m) / m);
	cout << ans << "\n";
}

int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
    	solve();
    }
    return 0;
}

