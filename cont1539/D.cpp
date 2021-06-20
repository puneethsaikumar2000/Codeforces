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

void print(string s, auto x){cout << s << " : " << x << endl;}

void solve(){
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	int cost = 0;
	map<int, int> m;
	REPN(i, n){
		cin >> a[i] >> b[i];
		m[b[i]] += a[i];
	}
	sort(b.begin(), b.end());
	int i = 0, j = n - 1;
	int bought = 0;
	// REPN(i, n){
	// 	cout << b[i] << " : " << m[b[i]] << endl;
	// }
	// cout << endl;
	while(i <= j and j >= 0 and i < n){
		// if (b[j] <= bought){
		// 	break;
		// }
		if (bought < b[i]){
			int k = b[i] - bought;
			int k1 = min(k, m[b[j]]);
			cost += 2 * k1;
			bought += k1;
			// print("k", k);
			m[b[j]] -= k1;
			k -= k1;
			if (m[b[j]] <= 0) j--;
			// while(k and i <= j){
				// if (m[b[j]] <= k){
				// 	k -= m[b[j]];
				// 	m[b[j]] = 0;
				// 	j--;
				// }
				// else{
				// 	m[b[j]] -= k;
				// 	k = 0;
				// }
			// }
		}
		else if (bought >= b[i]){
			// while(bought >= b[i]){
				int k = m[b[i]];
				cost += k;
				bought += k;
				m[b[i]] = 0;
				i++;
			// }
		}
		// print("i", i);
		// print("j", j);
		// print("bought", bought);
	}
	cout << cost << endl;
}

signed main(int argc, char const *argv[])
{
    fastio;
    int t = 1;
    // cin >> t;
    while(t--){
    	solve();
    }
    return 0;
}

