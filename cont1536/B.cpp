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

#define int long long

string get_string(int n){
	string ret = "";
	cout << "n : " << n << " : ";
	n--;
	ret += 'a' + n % 26;
	n /= 26;
	while(n){
		ret += ('a' + n % 26);
		n /= 26;
	}
	cout << ret << "\n";
	return ret;
}

char s1[1000];

string next_string(string s){

	int n = 999;
	string k = "";
	while(n > 0 and s1[n] == 'z'){
		s1[n] = 'a';
		n--;
	}
	s1[n] = (char)(s1[n] + 1);
	int i = 0;
	while(s1[i] == ('a' - 1)) i++;
	while (i < 1000) {
		k += s1[i];
		i++;
	}
	return k;
	// int n = s.length();
	// if (s[n - 1] != 'z'){
	// 	cout << "string : " << s.substr(0, n - 1) + (char)((int)s[n-1] + 1) << "\n";
	// 	return s.substr(0, n - 1) + (char)((int)s[n-1] + 1);
	// }
	// int i = n - 1;
	// string ret = "";
	// while (s[i] == 'z'){
	// 	ret += 'a';
	// 	i--;
	// }
	// cout << s.substr(0, i) + (char)((int)s[i] + 1) + ret << "\n";
	// return s.substr(0, i) + (char)((int)s[i] + 1) + ret;
}

void solve(){
	for (int i = 0; i < 1000; i++){
		s1[i] = 'a' - 1;
	}
	s1[999] = 'a';
	int n;
	cin>>n;
	string s;
	cin>>s;
	map<string, int> m;
	for(int len = 1; len <= n; len++){
		for(int i = 0; i <= n - len; i++){
			m[s.substr(i, len)] = 1;
		}
		int x = pow(26, len - 1);
		x++;
		int y = pow(26, len);
		y = 26*(y - 1);
		y = y / 25;
	}
	// int num_s = 1;
	string s2 = "a";
	while(m[s2] == 1){
		// num_s++;
		s2 = next_string(s1);
	}
	cout << s2 << "\n";
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

