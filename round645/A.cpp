#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		if (n % 2 == 0){
			cout << (n / 2) * m << endl;
		}
		else if (m % 2 == 0){
			cout << (m / 2) * n << endl;
		}
		else{
			cout << min(((m + 1)/2) + (m * ((n - 1)/2)),  ((n + 1)/2) + (n * ((m - 1)/2))) << endl;
		}
	}
	return 0;
}