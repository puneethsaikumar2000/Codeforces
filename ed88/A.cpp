#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;

#define pb push_back;
#define mp make_pair;
#define ff first;
#define ss second;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n, m, k;
		cin >> n >> m >> k;
		if (m <= (n / k)){
			cout << m << endl;
		}
		else{
			// float x = ceil((m - (n / k)) / ( k - 1));
			// printf("%i %f\n", (n / k), x);
			cout << (n / k) - ceil((m - (n / k)) / ((k - 1) * 1.0)) << endl;
		}
	}
	return 0;
}
