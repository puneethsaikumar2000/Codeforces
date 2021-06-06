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
typedef vector<ulli> vulli;
typedef pair<int, int> pii;
typedef vector<lli> vlli;
typedef map<int, int> mii;
typedef vector<vi> vvi;
typedef vector<pii> vpii;

#define int long long

void solve(){
	int n;
	cin>>n;
	vi b(n+2);
	lli sum = 0;
	map<int, int> m;
	REPN(i, n+2){
		cin>>b[i];
		sum += b[i];
	}
	sort(b.begin(),b.end());
	for (int i = 0; i < n + 2; i++){
		m[b[i]]++;
	}
	for (int i = n + 1; i >= 0; i--){
		lli x = sum - (2 * b[i]);
		if (x != b[i] and m[x] >= 1){
			bool seen = false;
			for (int j = 0; j < n + 2; j++){
				if (j != i and (seen or b[j] != x)){
					cout << b[j] << " ";
				}
				if (b[j] == x) seen = true;
			}
			cout << "\n";
			return ;
		}
		if (x == b[i] and m[x] >= 2){
			int seen_cnt = 0;
			for (int j = 0; j < n + 2; j++){
				if (seen_cnt >= 2 or b[j] != x){
					cout << b[j] << " ";
				}
				if (b[j] == x) seen_cnt++;
			}
			cout << "\n";
			return ;
		}
	}
	cout << -1 << "\n";
}

signed main(int argc, char const *argv[])
{
    fastio;
    int t = 1;
    cin >> t;
    while(t--){
    	solve();
    }
    return 0;
}

