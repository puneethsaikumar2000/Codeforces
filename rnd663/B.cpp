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
    	int n, m;
    	cin >> n >> m;
    	char a[n][m];
    	for (int i = 0; i < n; ++i)
    	{
    		for (int j = 0; j < m; ++j)
    		{
    			cin >> a[i][j];
    		}
    	}
    	if (n == 1 and m == 1){
    		cout << 0 << "\n";
    	}
    	else if (n == 1){
    		int ans = 0;
    		for (int j = 0; j < m - 1; ++j)
    		{
    			if (a[0][j] == 'D') ans++;
    		}
    		cout << ans << "\n";
    	}
    	else if (m == 1){
    		int ans = 0;
    		for (int i = 0; i < n - 1; ++i)
    		{
    			if (a[i][0] == 'R') ans++;
    		}
    		cout << ans << "\n";
    	}
    	else{
    		int ans = 0;
    		for (int i = 0; i < n - 1; ++i)
    		{
    			if (a[i][m - 1] == 'R') ans++;
    		}
    		for (int j = 0; j < m - 1; ++j)
			{
				if (a[n - 1][j] == 'D') ans++;
			}
			cout << ans << "\n";
    	}
    }
    return 0;
}

