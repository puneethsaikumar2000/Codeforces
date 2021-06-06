#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int pow2 = pow(2, 2);
		while(n%(pow2-1) != 0){
			pow2 *= 2;
		}
		cout << (n / (pow2-1)) << endl;
	}
	return 0;
}