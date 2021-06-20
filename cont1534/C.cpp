#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ff first
#define ss second
#define pb push_back
#define mk make_pair
#define maxn 300005
// #define mod 1e9 + 7
#define inf 1000000007
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define REPN(i, n) for (int i = 0; i < n; i++)
#define SQ(a) (a)*(a) // a * a then it gives wrong for 3 + 3 = >   3 + 3 * 3 + 3.

const int mod = 1e9 + 7;

typedef long long int lli;
typedef unsigned long long int ulli;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<lli> vlli;
typedef map<int, int> mii;
typedef vector<vi> vvi;
typedef vector<pii> vpii;


void cycle(bool marked[], int a[], int b[], int i, int n, map<int, int> &m){
	// cout << "marking  : " << a[i] << endl;
	marked[a[i]] = true;
	i = m[b[i]];
	// i = m[i];
	// cout << "changed i to - " << i << endl;
	while(!marked[a[i]]){
		// cout << "marking  : " << a[i] << endl;
		marked[a[i]] = true;
		// cout << "m[i - 1] - " << m[i] << ", b[i - 1]"  << endl;
		// i = b[i];
		i = m[b[i]];
		// cout << "changed i to - " << i << endl;
	}
}

void solve(){
	int n;
	cin >> n;
	int a[n], b[n];
	map<int, int> m;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		m[a[i]] = i;
	}
	for(int i = 0; i < n; i++){
		cin >> b[i];
	}
	// for(int i = 0; i < 2; i++){
	// 	for(int j = 0; j < n; j++){
	// 		cin >> a[i][n];
	// 	}
	// }
	// for (auto i : m) cout << "m - " << i.ff << " : " << i.ss << endl;
	bool marked[n + 1] = {false};
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if (!marked[a[i]]){
			// cout << "i - " << i << endl;
			cnt++;
			cycle(marked, a, b, i, n, m);
		}
	}
	long long int ans = 1;
	for(int i = 1; i <= cnt; i++){
		ans = (2 * ans) % mod;
	}
	cout << ans << endl;
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

