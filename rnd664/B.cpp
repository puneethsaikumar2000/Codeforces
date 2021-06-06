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

int main(int argc, char const *argv[])
{
    fastio;
    int n, m, Sx, Sy;
    cin >> n >> m >> Sx >> Sy;
    bool bo[n + 1][m + 1] = {false};
    int covered = 0;
    int x = Sx, y = Sy;
    cout << x << " " << y << "\n";
    bo[x][y] = true;
    cout << 1 << " " << y << "\n";
    bo[1][y] = true;
    for (int i = 1; i <= n; ++i)
    {
    	int start, end, incr;
    	if (i % 2 == 1){
    		for (int j = 1; j <= m; ++j)
	    	{
	    		if (bo[i][j]) continue;
	    		cout << i << " " << j << "\n";
	    		bo[i][j] = true;
	    	}
    	}
    	else{
    		for (int j = m; j >= 1; j--)
	    	{
	    		if (bo[i][j]) continue;
	    		cout << i << " " << j << "\n";
	    		bo[i][j] = true;
	    	}
    	}
    }
    return 0;
}

