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
    	vs[0] = get_str(c, 50);
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> a[i];
            if (a[i] == 0){
                vs[i + 1] = change_c(vs[i][0]);
                vs[i + 1] += vs[i].substr(1);
                // for (int j = 0; j < vs[i]; ++j)
                // {
                //     vs[i + 1] += change_c(vs[i][j]);
                // }
                // c = change_c(c);
                // vs[i + 1] = get_str(c, 50);
            }
            else{
                if (vs[i].size() < a[i]){
                    c = change_c(c);
                    vs[i] += get_str(c, a[i] - vs[i].size());
                }
                vs[i + 1] = vs[i].substr(0, a[i]);
            }
            // cout << "i : " << i << "c : " << c << endl;
            // for (string s : vs)
            //     cout << s << endl;
    	}
    	for (string s : vs)
    		cout << s << endl;
    }
    return 0;
}

