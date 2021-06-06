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

int alice_wins(int a1, int a2, int a3, int b1, int b2, int b3){
	if (a1 > 0 and a2 > 0 and a3 == 0 and b3 > 0){

	}
	return 0;
}

void solve(){
	int n;
	cin >> n;
	int a1, a2, a3, b1, b2, b3;
	cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
	int m = 0, M = 0;
	int x1, x2, x3, y1, y2, y3;

	x1 = a1 - min(a1, b1);
	y1 = b1 - min(a1, b1);
	x2 = a2 - min(a2, b2);
	y2 = b2 - min(a2, b2);
	x3 = a3 - min(a3, b3);
	y3 = b3 - min(a3, b3);
	m = alice_wins(x1, x2, x3, y1, y2, y3);

	x1 = a1 - min(a1, b2);
	y2 = b2 - min(a1, b2);
	x2 = a2 - min(a2, b3);
	y3 = b3 - min(a2, b3);
	x3 = a3 - min(a3, b1);
	y1 = b1 - min(a3, b1);
	M = min(a1, b2) + min(a2, b3) + min(a3, b1);
	M += alice_wins(x1, x2, x3, y1, y2, y3);
	cout << m << " " << M << "\n";
}

int main(int argc, char const *argv[])
{
    fastio;
    int t;
    // cin >> t;
    t = 1;
    while(t--){
    	solve();
    }
    return 0;
}

