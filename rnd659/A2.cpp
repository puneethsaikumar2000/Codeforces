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
#define LL long long


typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;

string get_str(char c, int n){
	string ans = "";
	for (int i = 0; i < n; ++i)
	{
		ans += c;
	}
	return ans;
}

char change_c(char c){
	if (c == 'a')
		return 'b';
	return 'a';
}

int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    // string s = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz"
    while(t--){
    	int n;
    	cin >> n;
    	vi a(n);
    	vector<string> vs(n+1, "");
        char c = 'a';
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> a[i];
    	}
        vs[0] = c;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] == 0)
                c = change_c(c);
            vs[i + 1] = c;
        }
        bool change = true;
        while(change){
            change = false;
            for (int i = 0; i < n; ++i)
            {
                /* code */
            }
        }
    	for (string s : vs)
    		cout << s << endl;
    }
    return 0;
}

