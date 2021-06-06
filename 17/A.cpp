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


int primes_n(int n){
	vector<char> is_prime(n + 1, true);
	is_prime[0] = is_prime[1] = false;
	vi ans;
	for (int i = 2; i * i <= n; ++i)
	{
		if (is_prime[i]){
			for (int j = i * i; j <= n; j += i)
				is_prime[j] = false;
		}
	}
	for (int i = 2; i <= n; ++i)
	{
		if (is_prime[i])
			ans.push_back(i);
	}

	int result = 0;
	// printf("primes : ");
	// for(auto p : ans)
	// 	printf("%i ", p);
	// printf("\n");
	for (int i = 0; i < ans.size() - 1; ++i)
	{
		int x = ans[i] + ans[i + 1] + 1;
		// printf("%i  %i  : x: %i \n", ans[i], ans[i + 1], x);
		if (x <= n && is_prime[x])
			result += 1;
	}
	return result;
}

int main(int argc, char const *argv[])
{
    fastio;
    int n, k;
    cin >> n >> k;
    int primes = primes_n(n);
    if (k <= primes)
    	cout << "YES" << endl;
    else
    	cout << "NO" << endl;
    return 0;
}

