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
	int n, q;
	cin >> n >> q;
	string s;
	cin >> s;
	int first[2], last[2];
	for (int i = n - 1; i >= 0; i--){
		if (s[i] == '0'){
			first[0] = i;
		}
		if (s[i] == '1'){
			first[1] = i;
		}
	}
	for(int i = 0; i < n; ++i){
		if (s[i] == '0'){
			last[0] = i;
		}
		if (s[i] == '1'){
			last[1] = i;
		}
	}
	REPN(z, q){
		int l, r;
		cin >> l >> r;
		l--;r--;
		// cout << " s[l] - '0' = " << s[l] - '0' << " :: " << first[(int)(s[l] - '0')] << " , " << last[(int)(s[l] - '0')];
		// cout << (first[(int)(s[l] - '0')] < l) << " " << (last[(int)(s[r] - '0')] > r);
		if (first[(int)(s[l] - '0')] < l or last[(int)(s[r] - '0')] > r){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
	}
}

int main(int argc, char const *argv[])
{
    fastio;
    int t = 1;
    cin >> t;
    while(t--){
    	solve();
    }
    return 0;
}

