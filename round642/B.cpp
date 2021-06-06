#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		vector<int> a(n), b(n);
		long long int suma = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
			suma += a[i];
		}
		for (int i = 0; i < n; ++i)
		{
			cin >> b[i];
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		if (a[0] >= b[n-1]){
		}
		else{
			int i = 0, j = n - 1;
			while(k--){
				if (a[i] < b[j]){
					suma += (b[j] - a[i]);
				}
				i += 1;
				j -= 1;
			}
		}
		cout << suma << endl;
	}
	return 0;
}