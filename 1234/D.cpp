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
	string s;
	cin >> s;
	int q;
	cin >> q;
	vector<set<int> > m(26);
	int n = s.size();
	for (int i = 0; i < n; i++){
		m[s[i] - 'a'].insert(i);
	}
	REPN(z, q){
		int typ;
		cin >> typ;
		if (typ == 1){
			int p; char c;
			cin >> p >> c;
			p--;
			m[s[p] - 'a'].erase(p);
			s[p] = c;
			m[c - 'a'].insert(p);
		}
		else{
			int l, r;
			cin >> l >> r;
			l--;
			r--;
			int ans = 0;
			for (int i = 0; i < 26; ++i){
				auto id = m[i].lower_bound(l);
				if (id != m[i].end() && (*id) <= r) ans++;
			}
			cout << ans << endl;
		}
	}
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

