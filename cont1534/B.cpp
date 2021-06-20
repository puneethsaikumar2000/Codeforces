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

#define int long long int 

void solve(int t){
	int n;
	cin >> n;
	vector<int> a(n + 2);
	// vi diff(n);
	REPN(i, n){
		cin >> a[i + 1];
		// if (i == 0) diff[i] = a[i];
		// else diff[i] = a[i] - a[i - 1];
	}
	a[0] = a[n + 1] = 0;
	int ops = 0;
	int maxa = 0;
	for (int i = 1; i <= n; i++){
		if (a[i] > a[i - 1] and a[i] > a[i + 1]){
			ops += (a[i] - max(a[i - 1], a[i + 1]));
			a[i] = max(a[i - 1], a[i + 1]);
		}
		// cout << "i - " << i << ", a[i] - " << a[i] << endl;
		// cout << "ops : " << ops << endl;
		maxa = max(maxa, a[i]);
	}
	int ops_in = ops;
	for(int i = 1; i <= n + 1; i++){
		ops += abs(a[i] - a[i - 1]);
	}
	// cout << ops + (2 * maxa) << endl;
	// if (t == 3074){
	// 	cout <<"t" << maxa << "," << ops << "," << ops_in << endl;
	// 	for (auto i : a) cout << i << " ";
	// 	cout << endl;
	// }
	cout << ops << endl;
}

signed main(int argc, char const *argv[])
{
    fastio;
    int t = 1;
    cin >> t;
    while(t--){
    	solve(t);
    }
    return 0;
}

