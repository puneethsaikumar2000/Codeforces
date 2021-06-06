#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; ++i)
		{
			cin >> v[i];
		}
		string pl = "a";
		int i = 0, j = n-1;
		int prev = v[0];
		int suma = 0, sumb = 0;
		int cnt = 0;
		cout << "prev:" << prev << " " << v[0] << endl;
		while(i < j){
			if (pl == "a"){
				int sum = 0;
				int x = i;
				int ind = i;
				while (x < j){
					sum += v[x];
					// printf("sum:: %i prev::%i\n", sum, prev);
					if (sum >= prev){
						ind = x;
						x++;
						break;
					}
					x++;
				}
				if (sum < prev){
					x = j;
				}
				i = x;
				cnt++;
				// pl = "b";
				prev = sum;
				suma += sum;
				// printf("x: %i sum:%i\n", x, sum);
			}
			if (pl == "b"){
				int sum = 0;
				int ind = j;
				int x = j;
				while (x > i){
					sum += v[x];
					// printf("sum:: %i prev::%i\n", sum, prev);
					if (sum >= prev){
						ind = x;
						x--;
						break;
					}
					x--;
				}
				if (sum < prev){
					x = i;
				}
				j = x;
				cnt++;
				// pl = "a";
				prev = sum;
				sumb += sum;
				// printf("x: %i sum:%i\n", x, sum);
			}
			if (pl == "a")
				pl = "b";
			else
				pl = "a";
			printf("i:%i  j:%i  prev:%i\n", i, j, prev);
			// break;
		}
		cout << cnt << " " << suma << " " << sumb << endl;
	}
	return 0;
}