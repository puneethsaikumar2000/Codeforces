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


// Another mthd is binary search from 1 to 10**9 which ever satisfies check(x)
// check(x) true when k >= sigma(i=n/2 to n) max(0, x - b[i]) b -> sorted a

void solve(){
	int n , k;
	cin >> n >> k;
	vi a(n);
	REPN(i, n){
		cin >> a[i];
	}
	sort(a.begin(),a.end());
	// REPN(i, n) cout << a[i] << " ";
	// cout << endl;
	int i = n / 2, j = n / 2;
	int ans = a[n/2];
	while(j < n){
		if (ans == a[j]) j++;
		else break;
	}
	// cout << "ans : " << ans << " , j : " << j << " ,  i : " << i << "\n" << flush; 
	while(k >= j - i){
		ans++;
		k -= (j - i);
		while(j < n){
			if (ans == a[j]) j++;
			else break;
		}
		// cout << "ans : " << ans << " , j : " << j << "\n" << flush; 
	}
	cout << ans << "\n";
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

