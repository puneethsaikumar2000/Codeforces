#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if ((n / 2) % 2 == 1){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
			for (int i = 1; i <= n/2; i++){
				cout << 2*i << " ";
			}
			for (int i = 1; i < n/2; ++i){
				cout << 2*i - 1 << " ";
			}
			cout << n - 1 + (n/2) << endl;
		}
	}
	return 0;
}