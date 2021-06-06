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

void prime_count(int n){
	vector<char> isPrime(n+2, true);
	isPrime[0] = isPrime[1] = false;
	for (int i = 2; i*i <= n + 2; ++i)
	{
		if (isPrime[i]){
			for(int j = i*i; j <= n + 1; j += i){
				// printf("not prime: %i\n", j);
				isPrime[j] = false;
			}
		}
	}

	if (n == 1 or n == 2)
		cout << 1 << endl;
	else
		cout << 2 << endl;

	for (int i = 2; i <= n + 1; ++i){
		if (isPrime[i])
			cout << 1 << " ";
		else
			cout << 2 << " ";
	}
	cout << endl;
}

int main(int argc, char const *argv[])
{
    fastio;
    int n;
    cin >> n;
    prime_count(n);
    return 0;
}

