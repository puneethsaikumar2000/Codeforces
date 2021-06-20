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

// after contest
int d[2001];

void solve(){
	int n;
	cin >> n;
	vi s[2];
	vpii edges;
	map<pii, int> m;
	cout << "? " << 1 << endl << flush;
	for (int i = 0; i < n; i++){
		cin >> d[i];
		if (i == 0) continue;
		s[d[i] & 1].pb(i + 1);
		if (d[i] == 1){
			edges.pb({1, i + 1});
			m[{1, i + 1}] = 1;
		}
	}
	// for (auto i : s[0]) cout << i << " " << flush;
	// cout << endl << flush;
	// for (auto i : s[1]) cout << i << " " << flush;
	// cout << endl << flush;
	int id = 0;
	if (s[1].size() < s[0].size()) id = 1;
	int m1 = s[id].size();
	for (int i = 0; i < m1; i++){
		cout << "? " << s[id][i] << endl << flush;
		for (int j = 0; j < n; j++){
			cin >> d[j];
			pii p = {min(s[id][i], j + 1), max(s[id][i], j + 1)};
			if (d[j] == 1 and m[p] == 0){
				m[p] = 1;
				edges.pb(p);
			}
		}
	}
	cout << "!" << endl << flush;
	for (auto i : edges){
		// if ()
		cout << i.ff << " " << i.ss << endl << flush;
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

