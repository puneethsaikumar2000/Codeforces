#include <bits/stdc++.h>

using namespace std;

long long int tallest(long int n){
	// long long int cards = 2;
	long long int k = 1;
	while (n >= (k*((3*k) + 1)) / 2){
		k++;
	}
	return k-1;
}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		long long int n;
		cin >> n;
		int cnt = 0;
		while (n >= 2){
			long long int h = tallest(n);
			// cout << "h: " << h << endl;
			n -= (h*((3*h) + 1))/ 2;
			cnt++;
		}
		cout << cnt << endl;
	}	
	return 0;
}