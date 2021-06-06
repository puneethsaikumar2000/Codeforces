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
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	int cnt[n][26];
	for(int i = 0; i < n; i++){
		for (int j = 0; j < 26; j++) cnt[i][j] = 0;
	}
	for(int i = 0; i < n; i++){
		cnt[min(i % k, k - 1 - (i % k))][s[i] - 'a']++;
	}
	int ans = 0;
	for (int i = 0; i < k / 2; i++){
		int mans = 0;
		for (int j = 0; j < 26; j++) mans = max(mans, cnt[i][j]);
		ans += 2 * (n / k) - mans;
	}
	if (k % 2 == 1){
		int mans = 0;
		for (int j = 0; j < 26; j++) mans = max(mans, cnt[k / 2][j]);
		ans += (n / k) -  mans;
	}
	cout << ans << "\n";
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

