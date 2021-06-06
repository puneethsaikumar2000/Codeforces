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


vi primes_find(int n, vi &primes){
	vector<char> is_prime(n+1, true);
	for (int i = 2; i * i <= n; ++i)
	{
		if (is_prime[i]){
			for (int j = i*i; j <= n; j += i)
				is_prime[j] = false;
		}
	}

	for (int i = 2; i <= n; ++i){
		if (is_prime[i])
			primes.push_back(i);
	}
}


vi primeFactors(int n, vi &primes){
	vi facts;
	if (n % 2 == 0){
		facts.push_back(2);
		while (n % 2 == 0){
	        n /= 2;
	    }
	}

	for (int i = 1; i < primes.size() && n > 0; ++i)
	{
		// printf("p : %i  n: %i\n", primes[i], n);
		if (primes[i] > sqrt(n))
			break;
		int p = primes[i];
		if (n % p == 0){
			facts.push_back(p);
			while(n % p == 0){
				n /= p;
			}
		}
	}
	if (n > 2){
		// printf("prime: p : %i  n: %i\n", n, n);
		facts.push_back(n);
	}
	return facts;
}


int main(int argc, char const *argv[])
{
    fastio;
    int n, m;
    cin >> n >> m;
    vector<char> collider(n + 1, false);
    vector<int> primes;
    primes_find(n, primes);
    map<int, int> prime_divisors;
    for (int p : primes){
    	prime_divisors[p] = -1;
    	// printf("prime : %i : %i\n", p, prime_divisors[p]);
    }
    char c; int x;
    while(m--){
    	cin >> c >> x;
    	vi facts = primeFactors(x, primes);
    	if (c == '+'){
    		if (collider[x]){
	    		printf("Already on\n");
	    	}
	    	else{
	    		// printf("facts : \n");
	    		for(int div : facts){
	    			// printf("div: %i\n", div);
	    			if (div == 0)
	    				break;
	    		}
	    		int boo = -1;
	    		for (int p : facts){
	    			// printf("p : %i  prime_divisors[p]:  %i\n", p, prime_divisors[p]);
	    			if (prime_divisors[p] != -1){
	    				boo = prime_divisors[p];
	    				break;
	    			}
	    		}
	    		// int boo = conflict(primes, collider, x, prime_divisors);
	    		if (boo == -1){
	    			printf("Success\n");
	    			collider[x] = true;
	    			for (int p : facts){
	    				prime_divisors[p] = x;
	    			}
	    		}
	    		else{
	    			printf("Conflict with %i\n", boo);
	    		}
	    	}
    	}
    	else if (c == '-'){
    		if (collider[x]){
	    		printf("Success\n");
	    		collider[x] = false;
	    		for (int p : facts){
	    			prime_divisors[p] = -1;
	    		}
	    		// turn_off(primes, x, prime_divisors);
	    	}
	    	else{
	    		printf("Already off\n");
	    	}
    	}
    }
    return 0;
}

