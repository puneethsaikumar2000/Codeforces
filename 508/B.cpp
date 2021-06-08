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
	string n;
	cin >> n;
	int siz = n.length();
	int id = -1, id2 = siz - 1;
	for(int i = siz - 1; i >= 0; --i){
		if ((int)(n[i] - '0') % 2 == 0){
			if (id == -1) id = i;
			else{
				if (n[i] < n[id2]){
					id = i;
					
				}
			}
		}
	}
	if (id == -1){
		cout << -1 << "\n";
		return;
	}
	char c = n[id];
	n[id] = n[id2];
	n[id2] = c;
	cout << n << "\n";
}

int main(int argc, char const *argv[])
{
    fastio;
    int t = 1;
    // cin >> t;
    while(t--){
    	solve();
    }
    return 0;
}

