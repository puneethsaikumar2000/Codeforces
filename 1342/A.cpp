#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		long long int x, y, a, b;
		cin>>x>>y;
		x = abs(x);
		y = abs(y);
		cin>>a>>b;
		
		// cout<<cost(x,y,a,b)<<endl;
		unsigned long long int c = 0;
		if (b > 2*a){
			c = (a*(x+y));
			cout<<c<<endl;
		}
		else{
			// c = ((a*(max(x,y) - min(x,y)));
			c = max(x,y) - min(x,y);
			c *= a;
			unsigned long long c1 = b;
			c1 *= min(x,y);
			c += c1;
			// c = 1000000000;
			// c *= 1000000000;
			cout<<c<<endl;
		}
	}
	return 0;
}