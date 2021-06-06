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

#define int ll

void DFS(int i, vi &p, vector<bool> &reached, vi &group_vec){
	reached[i] = true;
	group_vec.push_back(i);
	i = p[i];
	if (reached[i]){
		return ;
	}
	else{
		DFS(i, p, reached, group_vec);
	}
}

void solve(){
	int n;
	cin >> n;
	vi p(n + 1);
	REPN(i, n) cin >> p[i + 1];
	vector<bool> reached(n + 1, false);
	vi cnt(n + 1, 0);
	int x = 1;
	int group_no = 1;
	vi group_vec;
	for (int i = 1; i <= n; i++){
		if (!(reached[i])){
			// cout << "i : " << i << "\n";
			vi group_v;
			DFS(i, p, reached, group_v);
			int siz = group_v.size();
			for (auto j : group_v){
				// cout << "j : " << j << "\n";
				cnt[j] = siz;
			}
		}
	}
	for(int i = 1; i <= n; i++){
		cout << cnt[i] << " ";
	}
	cout << '\n';
}


void solve1(){
	int n;
	vi p(n + 1);
	REPN(i, n) cin >> p[i + 1];
	
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

