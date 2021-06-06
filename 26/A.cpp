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

int count_almost_primes(int n){
	int result = 0;
	vector<char> isPrime(n + 1, true);
	vector<int> prime_count(n + 1, 0);
	isPrime[0] = isPrime[1] = false;
	for (int i = 2; i <= n; ++i)
	{
		if (isPrime[i]){
			// printf("prime i: %i ", i);
			for(int j = i*2; j <= n; j += i){
				isPrime[j] = false;
				prime_count[j] += 1;
			}
		}
	}

	result = 0;
	for (int i = 2; i <= n; ++i){
		// printf("prime : %i \n", i);
		if (prime_count[i] == 2){
			result += 1;
			// printf("result : %i\n", result);
		}
	}

	return result;
}

int main(int argc, char const *argv[])
{
    fastio;
    int n;
    cin >> n;
    // int nsqrt = sqrt(n);
    if (n < 6){
    	cout << 0 << endl;
    }
    else {
    	// printf("%i\n", nsqrt);
    	int ans = count_almost_primes(n);
    	cout << ans << endl;
    }
    return 0;
}

