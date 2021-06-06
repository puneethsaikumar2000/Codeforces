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
// int less1(int cand, vi &v, int siz){
// 	int amt = 0;
// 	return lesshelp(cand, v, )



// 	int mid = siz / 2;

// 	while (v[mid] < v[mid])

// 	if (cand < v[mid]){
// 		return less1(cand, v, mid);
// 	}
// 	if (cand == v[mid]){
// 		return mid + 1;
// 	}
// 	if (cand > v[mid]){
// 		return mid + 1
// 	}

// 	for (int i = 0; i < v.size(); ++i)
// 	{
// 		if (cand >= v[i])
// 			amt += 1;
// 		else
// 			break;
// 	}
// 	return amt;
// }


int main(int argc, char const *argv[])
{
    fastio;
    int n, p;
    cin >> n >> p;
    vi v(n);
    int min_v = 2001;
    int max_v = 0;
    for (int i = 0; i < n; ++i)
    {
    	cin >> v[i];
    	min_v = min(min_v, v[i]);
    	max_v = max(max_v, v[i]);
    }
    sort(v.begin(), v.end());
    map<int, int> m;
    // for (int i = 1; i <= 2000; ++i)
    // {
    // 	m[i] = 0;
    // }
    for (int i = 0; i < n; ++i)
    {
    	m[v[i]] += 1;
    }
    // for (int i = 1; i <= 2000; ++i)
    // {
    // 	if (m[i] == 0)
    // 		m[i] = m[i-1];
    // }
    vi v_good;
    for (int x = max_v - n + 1; x < max_v; ++x)
    {
    	// int candies = x;
    	bool good = true;
    	int taken = 0;
    	int v = m[x-1];
    	lli ans = 1;
    	for (int candies = x; candies < x + n - 1; candies++){
    		int less_than_equal_x = m[candies] - taken;
    		taken += 1;
    		if (less_than_x % p == 0){
    			good = false;
    			break;
    		}
    	}
    	if (good){
    		v_good.push_back(x);
    	}
    }
    cout << v_good.size() << endl;
    for (auto i : v_good){
    	cout << i << " ";
    }
    cout << endl;
    return 0;
}