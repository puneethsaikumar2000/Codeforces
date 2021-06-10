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
	int n, b;
	cin >> n >> b;
	vi a(n);
	REPN(i, n) cin >> a[i];
	int e = 0, o = 0;
	vi v;
	for (int i = 0; i < n - 1; ++i){
		if (a[i] % 2) o++;
		else e++;
		if (o == e){
			// if (i != n - 1)
			v.push_back(abs(a[i + 1] - a[i]));
		}
	}
	v.push_back(INT_MAX);
	sort(v.begin(), v.end());
	int m = v.size();
	for (int i = 0; i < m; ++i){
		if (b < v[i]){
			cout << i << "\n";
			return;
		}
		b -= v[i];
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

