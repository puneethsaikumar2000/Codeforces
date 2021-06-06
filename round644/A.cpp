#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		int m = min(a, b);
		int M = max(a, b);
		a = m; b = M;
		// printf("%i %i\n", a, b);
		if (2*a >= b){
			cout << 4*a*a << endl;
		}
		else{
			cout << b*b << endl;
		}
	}
	return 0;
}