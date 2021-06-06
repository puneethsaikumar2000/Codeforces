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

int get_max_two_sum(vi &two_sum, int k1){
	int ans = two_sum[0];
	for (int i = 0; i <= k1; ++i)
	{
		ans = max(ans, two_sum[i]);
	}
	return ans;
}

int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
    	int n, k, z;
    	cin >> n >> k >> z;
    	vi v(n);
    	vi sum(n);
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> v[i];
    		if (i == 0)
    			sum[i] = v[i];
    		else
    			sum[i] = sum[i - 1] + v[i];
    	}
    	vi two_sum(n);
    	for (int i = 0; i < n - 1; ++i)
    	{
    		two_sum[i] = v[i] + v[i + 1];
    		// printf("i: %i  two_sum: %i\n", i, two_sum[i]);
    	}
    	int ans = sum[k];
    	for (int i = 0; i <= z and 2 * i <= k; ++i)
    	{
    		int max_func = get_max_two_sum(two_sum, k - 2 * i);
    		ans = max(ans, sum[k - 2 * i] + i * max_func);
    		// printf("loop:%i  %i  %i  %i\n", i, max_func, sum[k - 2 * i], k - 2 * i);
    	}
    	cout << ans << "\n";
    }
    return 0;
}

