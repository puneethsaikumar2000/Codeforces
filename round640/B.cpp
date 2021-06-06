#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		if (n % 2 == 1 and k % 2 == 0){
			cout << "NO" << endl;
		}
		else if (n % 2 == 1 and k % 2 == 1){
			if (n < k){
				cout << "NO" << endl;
				continue;
			}
			cout << "YES" << endl;
			int sum = 0;
			for (int i = 1; i <= k-1; ++i)
			{
				cout << 1 << " ";
				sum += 1;
			}
			cout << n - sum << endl;
		}
		else if (n % 2 == 0 and k % 2 == 1){
			if (n < 2*k){
				cout << "NO" << endl;
				continue;
			}
			cout << "YES" << endl;
			int sum = 0;
			int ind = 0;
			for (int i = 1; i <= k-1; ++i)
			{
				cout << 2 << " ";
				sum += 2;
			}
			cout << n-sum << endl;
		}
		else if (n % 2 == 0 and k % 2 == 0){
			if (n < k){
				cout << "NO" << endl;
			}
			else if (n < 2*k){
				cout << "YES" << endl;
				int sum = 0;
				for (int i = 1; i <= k-1; ++i)
				{
					cout << 1 << " ";
					sum += 1;
				}
				cout << n - sum << endl;
			}
			else{
				cout << "YES" << endl;
				int sum = 0;
				for (int i = 1; i <= k-1; ++i)
				{
					cout << 2 << " ";
					sum += 2;
				}
				cout << n - sum << endl;
			}
		}
	}
	return 0;
}