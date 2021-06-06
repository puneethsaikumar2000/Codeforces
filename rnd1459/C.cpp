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

lli gcd(lli a, lli b) 
{ 
    if (!a) 
       return b; 
    return gcd(b%a,a); 
} 

void solve(){
	int n, m;
	cin >> n >> m;
	lli a[n], b[m];
	lli diffa[n], diffb[m];
	lli gcd_1_n = 0;
	REPN(i, n){
		cin >> a[i];
		if (i == 0) diffa[i] = a[i];
		else{
			diffa[i] = a[i] - a[i - 1];
			if (i == 1){
				gcd_1_n = diffa[i];
			}
			else{
				gcd_1_n = gcd(gcd_1_n, diffa[i]);
			}
		}
	}
	REPN(i, m){
		cin >> b[i];
		if (n > 1) cout << abs(gcd(a[0] + b[i], gcd_1_n)) << " ";
		else cout << a[0] + b[i] << " ";
	}
	cout << "\n";
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

