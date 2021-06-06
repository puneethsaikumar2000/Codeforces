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

int solve(const string &s, int x, int y){
	int res = 0;
	for (auto c : s){
		if (c - '0' == x){
			res++;
			int temp = x;
			x = y;
			y = temp;
		}
	}
	if (x != y and res % 2 == 1)
		res--;
	return res;
}

int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
    	string s;
    	cin >> s;
    	int ans = 0;
    	for (int x = 0; x < 10; ++x)
    	{
    		for (int y = 0; y < 10; ++y)
    		{
    			ans = max(ans, solve(s, x, y));
    		}
    	}
    	cout << s.length() - ans << endl;
    }
    return 0;
}

