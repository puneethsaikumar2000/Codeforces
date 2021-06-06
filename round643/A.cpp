#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long int lli;
typedef unsigned long long int ulli;
typedef pair<int,int> pii;

#define pb push_back;
#define mk make_pair;
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
		ulli a, k;
		cin >> a >> k;
		vector<ulli> v(k);
		v[0] = a;
		bool zero = false;
		ulli ans;
		for (int ind = 1; ind < k; ++ind)
		{
			vi digits;
			ulli a1 = v[ind-1];
			int mi = 9, Ma = 0;
			while (a1 != 0){
				int rem = a1 % 10;
				digits.push_back(rem);
				mi = min(rem, mi);
				Ma = max(Ma, rem);
				a1 = a1 / 10;
			}
			if (mi == 0){
				v[ind] = a1;
				zero = true;
				ans = a1;
				break;
			}
			v[ind] = a1;
			v[ind] += mi*Ma;
		}
		if (zero){
			cout << ans << endl;
		}
		else
			cout << v[k-1] << endl;
	}
	return 0;
}