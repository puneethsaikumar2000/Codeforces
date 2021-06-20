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


void print(string s, auto x){
	cout << s << " : " << x << endl;
}

void solve2(){
	int n, k;
	cin >> n >> k;
	string s, s1;
	cin >> s;
	// s1 = s;
	int i = 1;
	int curr = 0;
	int pos = 0;
	int x = 0;
	while(i < n){
		// print("curr", curr);
		// print("x", x);
		if (s[i] > s[curr]) break;
		else if (s[i] < s[curr]){
			curr = 0;
			x = i;
		}
		else{
			curr++;
		}
		i++;
	}
	x++;
	for (int j = 0; j < k; j++) cout << s[j % x];
	cout << endl;
}

void solve(){
	int n, k;
	cin >> n >> k;
	string s, s1;
	cin >> s;
	s += s;
	s1 = s;
	int i = 0;
	string minstring = s;
	int minid = n - 1;
	for (i = 0; i < n; i++){
		if (s[i] > s[0]){
			if (s.substr(0, i) + s < minstring){
				minstring = s.substr(0, i);
				minid = i - 1;
			}
			break;
		}
		else if (s[i] < s[0]) continue;
		if (s.substr(0, i) + s < minstring){
			minstring = s.substr(0, i);
			minid = i - 1;
		}

	}
	int siz = minstring.size();
	for(int j = 0; j < k; j++){
		cout << minstring[j % siz];
	}
	cout << endl;
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

	