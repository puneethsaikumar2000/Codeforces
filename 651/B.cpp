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
	int n;
	cin >> n;
	vi a(n);
	REPN(i, n) cin >> a[i];
	sort(a.begin(), a.end());
	int ans = 0;
	map<int, int> m;
	int cnt = 1;
	int maxcnt = 1;
	for(int i = 1; i < n; ++i){
		if (a[i] > a[i - 1]){
			m[cnt]++;
			maxcnt = max(maxcnt, cnt);
			cnt = 1;
		}
		else cnt++;
	}
	m[cnt]++;
	maxcnt = max(maxcnt, cnt);
	if (maxcnt == n){
		cout << 0 << "\n";
		return;
	}
	for (int i = 1; i <= maxcnt; ++i){
		// if (m[i] > 1)
		ans += (m[i] * i) - 1;
	}
	cout << ans << endl;
}

int main(int argc, char const *argv[])
{
    fastio;
    int t = 1;
    // cin >> t;
    while(t--){
    	solve();
    }
    return 0;
}

