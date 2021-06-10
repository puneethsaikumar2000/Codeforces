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
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define REPN(i, n) for (int i = 0; i < n; i++)
#define SQ(a) (a)*(a) // a * a then it gives wrong for 3 + 3 = >   3 + 3 * 3 + 3.

typedef long long int lli;
typedef unsigned long long int ulli;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<lli> vlli;
typedef map<int, int> mii;
typedef vector<vi> vvi;
typedef vector<pii> vpii;

vector<int> primes;

int max_division(int a){
	int cunt=0;
		while(a%2==0){
			a/=2;
			cout << 2 << " ";
			cunt++;
		}
		for(int i=3;i<=sqrt(a);i=i+2){
			while(a%i==0){
				cout << i << " ";
				a/=i;
				cunt++;
			}
		}
		if(a>2){
			cout << a << " ";
			cunt++;
		}
		cout << endl;
	return cunt;
}

void solve(){
	int a, b, k;
	cin >> a >> b >> k;
	
	int n1 = max_division(a);
	int n2 = max_division(b);
	cout << "n1, n2 - " << n1 << " " << n2 << "\n";

	if (k == 1){
		if (a == b) cout << "No\n";
		else if (a == 1 and b > 1) cout << "Yes\n";
		else if (a > 1 and b == 1) cout << "Yes\n";
		else{
			if (max(a, b) % min(a, b) == 0) cout << "Yes\n";
			else cout << "No\n";
		}
		return;
	}
	// int g = __gcd(a, b);
	// int n3 = max_division(g);
	// if (g == 1){
	if (n1 + n2 < k) cout << "No\n";
	else cout << "Yes\n";
	// }
	// else{
	// 	if (n1 + n2 < k) cout << "No\n";
	// 	else cout << "Yes\n";
	// }
}

int main(int argc, char const *argv[])
{
    fastio;
    int t = 1;
    int M = sqrt(mod);
    vector<char> is_prime(M+1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 0; i * i < M; i++){
    	if (is_prime[i]){
			for(int j = i*i; j <= M; j += i)
				is_prime[j] = false;
		}
    }
    for (int i = 2; i < M; i++){
    	if (is_prime[i]) primes.push_back(i);
    }
    cin >> t;
    while(t--){
    	solve();
    }
    return 0;
}

