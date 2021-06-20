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
	string a, b;
	cin >> a >> b;
	int prev = -1;
	int ans = 0;
	if (a[0] != b[0]) prev = 0;
	REP(i, 1, n - 1){
		// cout << " i : " << i << " , prev - " << prev << endl;
		if (a[i] != b[i]){
			if (prev == i - 1 and a[i] != a[i - 1]){
				ans++;
				prev = -1;
			}
			else if (prev == i - 1 and a[i] == a[i - 1]){
				ans++;
				prev = i;
			}
			else prev = i;
		}
		else{
			if (prev != -1) ans++;
			prev = -1;
		}
	}
	// cout << " i : " << n - 1 << " , prev - " << prev << endl;
	if (prev != -1) ans++;
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

