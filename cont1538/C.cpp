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
	int n, l, r;
	cin >> n >> l >> r;
	vector<int> a(n, 0);
	REPN(i, n){
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int i = 0, j = 1;
	int ans = 0;
	for (int i = 0; i < n; i++){
		int x = l - a[i];
		int y = r - a[i];
		// cout << "i : " << i << ", a[i] - " << a[i] << "\n";
		// cout << "x : " << x << " , y :" << y << "\n";
		int id1 = lower_bound(a.begin(), a.end(), x) - a.begin();
		int id2 = upper_bound(a.begin(), a.end(), y) - a.begin();
		// cout << "id1 : " << id1 << " , id2 : " << id2  << "\n";
		id2--;
		ans += (id2 - id1 + 1);
		if (id1 <= i and i <= id2) ans--;
	}
	cout << ans / 2 << endl;

	// while (i < n and j < n){
	// 	if (i == j){
	// 		j++;
	// 		continue;
	// 	}
	// 	if (a[i] + a[j] < l){

	// 	}
	// }
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

