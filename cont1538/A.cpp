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
	int n;
	cin >> n;
	vi a(n);
	int mina = INT_MAX;
	int maxa = INT_MIN;
	int minid = -1, maxid = -1;
	REPN(i, n){
		cin >> a[i];
		if (a[i] < mina){
			mina = a[i];
			minid = i;
		}
		if (a[i] > maxa){
			maxa = a[i];
			maxid = i;
		}
	}
	// int ans = 0;
	// cout << minid << " " << maxid << "\n";
	if (minid < maxid){
		cout << min(n - minid, min(maxid + 1, minid + 1 + n - maxid)) << "\n";
	}
	else{
		cout << min(n - maxid, min(minid + 1, maxid + 1 + n - minid)) << "\n";
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

