#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		unsigned long long int ans = n-1;
		ans *= n+1;
		ans *= n;
		cout << ans / 3 << endl;
	}
	return 0;
}