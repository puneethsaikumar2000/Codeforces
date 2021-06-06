#include <bits/stdc++.h>

using namespace std;

// template <typename T>
long long int modpow(long long int base, long long int exp, long long int modulus) {
	base %= modulus;
	long long int result = 1;
	while (exp > 0) {
		if (exp & 1) result = (result * base) % modulus;
		base = (base * base) % modulus;
		exp >>= 1;
	}
	return result;
}

int main(){
	long long int n, m, L, R;
	cin>>n>>m>>L>>R;
	long long int mod = 998244353;
	long long int  k = R - L;
	if (n * m % 2 == 1){
		cout<<modpow(R-L+1, n*m, mod)<<endl;
	}
	else if (k % 2 == 1){
		cout<<(modpow(R-L+1, n*m, mod) * (mod + 1) / 2 % mod)<<endl; 
		// did not understand why mod + 1 is there, without it wrong answer!!!
	}
	else{
		cout<<((modpow(R-L+1, n*m, mod) + 1) * (mod + 1) / 2 % mod)<<endl;
	}
}