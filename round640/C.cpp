#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		if (k < n){
			cout << k << endl;
			continue;
		}
		int d = k / (n-1);
		// cout << d1 << " " << d << endl;
		long long int s;
		if (k % (n-1) == 0){
			s = n*(d-1) + n - 1;
		}
		else{
			s = (n*d) + (k % (n-1));	
		}
		cout << s << endl;
	}
	return 0;
}