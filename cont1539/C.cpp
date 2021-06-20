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
	int n, k, x;
	cin >> n >> k >> x;
	vector<int> v(n);
	REPN(i, n) cin >> v[i];
	sort(v.begin(), v.end());
	int groups = 1;
	vector<int> v1;
	for(int i = 1; i < n; i++){
		if (v[i] - v[i - 1] > x){
			v1.push_back(v[i] - v[i - 1]);
		}
	}
	sort(v1.begin(), v1.end());
	// print("k", k);
	// print("x", x);
	// cout << "v1 : ";
	// for (auto h : v1) cout << h << " ";
	// cout << endl;
	int v1_siz = v1.size();
	int ans = v1_siz + 1;
	// cout << "mem:";
	for (int i = 0; i < v1_siz and k; i++){
		int mem = v1[i] / x;
		if (v1[i] % x == 0) mem--;
		if (k >= mem){
			ans--;
			k -= mem;
		}
		else break;
	}
	// cout << endl;
	cout << ans << endl;
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

