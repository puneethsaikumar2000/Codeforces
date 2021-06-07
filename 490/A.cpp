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
	int c[3];
	c[0] = c[1] = c[2] = 0;
	vector<vector<int> > v(3);
	REPN(i, n){
		cin >> a[i];
		c[a[i] - 1]++;
		v[a[i] - 1].push_back(i + 1);
	}
	int w = min(c[0], min(c[1], c[2]));
	cout << w << "\n";
	for (int i = 0; i < w; i++){
		cout << v[0][i] << " " << v[1][i] << " " << v[2][i] << "\n";
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

