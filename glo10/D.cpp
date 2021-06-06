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

char other(char c){
	return (c == 'L')? 'R' : 'L';
}

void solve(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	string s1 = "L", s2 = "R";
	for (int i = 1; i < n; ++i)
	{
		s1 += other(s1[s1.length() - 1]);
		s2 += other(s2[s2.length() - 1]);
	}
	int ans1 = 0, ans2 = 0;
	for (int i = 0; i < n; ++i)
	{
		if (s[i] != s1[i]) ans1++;
		if (s[i] != s2[i]) ans2++;
	}
	cout << min(ans1, ans2) << "\n";
}

int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
    	solve();
    }
    return 0;
}

