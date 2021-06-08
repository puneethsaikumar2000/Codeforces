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
	int n, m1;
	cin >> n >> m1;
	vector<string> v(n);
	vector<string> a;
	string palin = "";
	map<string, int> m;
	int n1 = 0, n2 = 0;
	REPN(i, n){
		cin >> v[i];
		m[v[i]] = i + 1;
	}
	// for(auto i : m){
	// 	cout << i.first << " : " << i.second << endl;
	// }
	REPN(i, n){
		string s = v[i];
		reverse(v[i].begin(), v[i].end());
		// cout << " i : " << i << " s : " << s << " v[i] : " << v[i] << "\n";
		if (s == v[i]){
			if (palin.size() <= s.size()){
				palin = s;
				n2 = s.size();
			}
		}
		else if (m[v[i]] != 0){
			a.push_back(s);
			m[s] = 0;
			m[v[i]] = 0;
		}
	}
	cout << 2*m1*a.size() + palin.size() << "\n";
	for(auto &i:a){
		cout << i;
	}
	cout << palin;
	reverse(a.begin(), a.end());
	for(auto &i:a){
		reverse(i.begin(), i.end());
		cout << i;
	}
	cout << "\n";
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

