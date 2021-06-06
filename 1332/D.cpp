#include <bits/stdc++.h>

using namespace std;

int main()
{
	int k;
	cin>>k;
	int x = pow(2, 17);
	cout<<2<<" "<<3<<endl;
	printf("%i %i %i\n", x^k, x, 0);
	printf("%i %i %i\n", k, x^k, k);
	
	return 0;
}