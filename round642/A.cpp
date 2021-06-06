#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		if (n == 1){
			cout << 0 << endl;
		}
		else if (n == 2){
			cout << m << endl;
		}
		else if (n % 2 == 1){
			long long int sum = (n-3)/2 + (m - ((n-3)/2));
			cout << 2*sum << endl;
		}
		else{
			long long int sum = (n-4)/2 + (m - ((n-4)/2));
			cout << 2*sum << endl;
		}
	}
	return 0;
}