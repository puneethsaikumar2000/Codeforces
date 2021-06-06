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

typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;

// #define int long long;

string s;
int n;
map<char, int> m;

int calc(int l, int r, char c){
	if (r - l == 1){
		if (s[l] == c)
			return 0;
		return 1;
	}
	int mid = (r + l) / 2;
	int count1 = 0, count2 = 0;
	for (int i = l; i < mid; ++i)
	{
		if (s[i] == c)
			count1 += 1;
	}
	for (int i = mid; i < r; ++i)
	{
		if (s[i] == c)
			count2 += 1;
	}
	int cntl = ((r - l) / 2) - count1 + calc(mid, r, c + 1);
	int cntr = ((r - l) / 2) - count2 + calc(l, mid, c + 1);
	return min(cntl, cntr);
}

int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
    	cin >> n >> s;
    	int ans = calc(0, n, 'a');
    	cout << ans << endl;
    }
    return 0;
}

