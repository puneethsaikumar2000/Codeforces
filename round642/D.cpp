#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n+1,0);
		if (n % 2 == 1){
			n = (n + 1) / 2;
			int i = 1;
			int k = 1;
			while((n+1)/2 != 0){
				for (int j = 1; j <= 2*k -1;j += 2){
					a[n] = i;
					i += 1;
				}
				k += 1;
				n = (n + 1) / 2;
			}
		}
		else{

		}
	}
	return 0;
}