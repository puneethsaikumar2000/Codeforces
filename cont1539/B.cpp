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


void print(string s, auto x){cout << s << " : " << x << endl;}

void solve(){
	int n, q;
	cin >> n >> q;
	string s;
	cin >> s;
	int cnt[26][n + 1];
	for (int i = 0; i < 26; i++){
		cnt[i][0] = 0;
	}
	for(int i = 1; i <= n; i++){
		for (int j = 0; j < 26; j++){
			if (j == s[i - 1] - 'a') cnt[j][i] = cnt[j][i - 1] + 1;
			else cnt[j][i] = cnt[j][i - 1];
		}
	}
	REPN(z, q){
		int l, r;
		cin >> l >> r;
		l--;
		int ans = 0;
		for (int i = 0; i < 26; i++){
			ans += (cnt[i][r] - cnt[i][l])*(i + 1);
		}
		cout << ans << endl;
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

