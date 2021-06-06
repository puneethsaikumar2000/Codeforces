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


int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
    	int n, x;
    	cin >> n;
    	vi cnt(n + 1, 0);
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> x;
    		cnt[x]++;
    	}
    	int ans = 0;
    	for (int s = 2; s <= 2*n; ++s)
    	{
    		int cur = 0;
    		for (int i = 1; i < (s + 1) / 2; ++i)
    		{
    			if (s - i > n) continue;
    			cur += min(cnt[i], cnt[s - i]);
    		}
    		if (s % 2 == 0)
    			cur += cnt[s / 2] / 2;
    		ans = max(ans, cur);
    	}
    	cout << ans << "\n";
    }
    return 0;
}

