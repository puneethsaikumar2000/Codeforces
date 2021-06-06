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
	int n, m;
	cin >> n >> m;
    vi a(n), b(m);
    for (int i = 0; i < n; ++i)
    {
    	cin >> a[i];
    }
    for (int i = 0; i < m; ++i)
    {
    	cin >> b[i];
    }
    int ans;
    for (ans = 0; ans <= 511; ++ans)
    {
    	bool pos = true;
    	int i;
    	for (i = 0; i < n && pos; ++i)
    	{
    		pos = false;
    		for (int j = 0; j < m; ++j)
    		{
    			if (((a[i] & b[j]) | ans) == ans){
    				pos = true;
    				break;
    			}
    		}
    		if (!pos) break;
    	}
    	if (pos){
    		break;
    	}
    }
    cout << ans << "\n";
}


int main(int argc, char const *argv[])
{
    fastio;
    solve();
    return 0;
}

