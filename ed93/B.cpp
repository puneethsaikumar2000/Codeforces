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
	string s;
	cin >> s;
	vi v;
	int l = 0;
	int n = s.length();
	for (int i = 0; i < n; ++i)
	{
		if (s[i] == '1'){
			l += 1;
		}
		else{
			if (l != 0) v.push_back(l);
			l = 0;
		}
	}
	if (l != 0) v.push_back(l);
	sort(v.begin(), v.end(), greater<int>());
	int ans = 0;
	for (int i = 0; i < v.size(); i += 2)
	{
		ans += v[i];
	}
	cout << ans << "\n";
}

int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
    	solve();
    }
    return 0;
}

