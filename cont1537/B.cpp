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
	int n, m, i, j;
	cin >> n >> m >> i >> j;
	pii p[4] = {{1, 1}, {n, 1}, {1, m}, {n, m}};
	int id = -1;
	int dist = 0;
	for (int i = 0; i < 4; i++){
		if (dist < abs(p[i].ff - i) + abs(p[i].ss - j)){
			dist = abs(p[i].ff - i) + abs(p[i].ss - j);
			id = i;
		}
	}
	cout << p[id].ff << " " << p[id].ss << " ";
	cout << p[3 - id].ff << " " << p[3 - id].ss << endl;
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

