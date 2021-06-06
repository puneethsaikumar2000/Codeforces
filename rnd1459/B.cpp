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
	lli ans = 0;
	if (n % 2 == 0){
		int num_l_r = n / 2;
		int num_u_d = n / 2;
		lli pos_x = num_l_r + 1;
		lli pos_y = num_u_d + 1;
		ans = (lli)pos_x * pos_y;
	}
	else{
		int num_l_r = n / 2;
		int num_u_d = n - (n / 2);
		lli pos_x = num_l_r + 1;
		lli pos_y = num_u_d + 1;
		ans = (lli)pos_x * pos_y;
		ans *= 2;
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

