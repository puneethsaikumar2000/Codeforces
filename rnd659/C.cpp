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

// 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
// l i i i k l h o o h h  n  o  n  o  o  o  h  h  l  o  l  g  m  o  i
// 	g -> m
// l i i i k l h o o h h  n  o  n  o  o  o  h  h  l  o  l  m  m  o  i
// 	h -> i
// l i i i k l h o o i i  n  o  n  o  o  o  i  i  l  o  l  m  m  o  i
// 	i -> j
// l j j j k l h o o j j  n  o  n  o  o  o  i  i  l  o  l  m  m  o  j
// 	j -> m
// l m m m k l h o o m j  n  o  n  o  o  o  i  i  l  o  l  m  m  o  m

// m o m m m n o o o n j  n  o  n  o  o  o  i  n  n  o  m  m  m  o  n

int main(int argc, char const *argv[])
{
    fastio;
    int t, n;
    string a, b;
    cin >> t;
    while(t--){
    	cin >> n;
    	cin >> a >> b;
    	vector<vector<int> > alph(20);
    	bool pos = true;
    	// if (n == 26 and a == "liiiklhoohhnonooohhlolgmoi"){
    	// 	cout << b << endl;
    	// }
    	for (int i = 0; i < n; ++i)
    	{
    		if (a[i] != b[i]){
    			if (a[i] > b[i]){
    				pos = false;
    				break;
    			}
    			alph[a[i] - 'a'].pb(b[i] - a[i]);
    		}
    	}
    	if (!pos)
    		cout << -1 << endl;
    	else{
    		// vi v;
    		int ans = 0;
    		for (int i = 0; i < 20; ++i)
    		{
    			if (alph[i].size() == 0)
    				continue;
    			// if (v.size() != 0)
    				// alph[i].insert(alph[i].end(), v.begin(), v.end());
    			// for (int d : alph[i])
    				// printf("i : %c   diff : %i\n", i + 'a', d);
    			sort(alph[i].begin(), alph[i].end());
    			auto ip = unique(alph[i].begin(), alph[i].end());
    			alph[i].resize(distance(alph[i].begin(), ip));
    			int min_diff = alph[i][0];
    			// if (v.size() != 0)
    				// v.clear();
    			for (int d : alph[i]){
    				if (d != min_diff)
    					alph[i + min_diff].push_back(d - min_diff);
    			}
    			ans += 1;
    		}
    		// ans += (int)v.size();
    		cout << ans << endl;
    	}
    }
    return 0;
}

