#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;

#define pb push_back;
#define mp make_pair;
#define ff first;
#define ss second;

int main(int argc, char const *argv[])
{
	// cout << (1.2 % 1);
	int t;
	cin >> t;
	while(t--){
		int h, c, t;
		cin >> h >> c >> t;
		double m = (h + c) / 2;
		// if (t == h){
		// 	cout << 1 << endl;
		// }
		if (2*t <= h + c){
			cout << 2 << endl;
		}
		else {
			int x = ((h - t)*1.0) / (2.0*t - h - c);
			// int xi = x;
			// if (xi == x){
			// 	cout << (2*xi + 1) << endl;
			// }
			// else{
				long long int x1 = x, x2 = x + 1;
				double y1 = abs((((x1*(h + c) + h)*1.0)/ (2.0*x1 + 1)) - t);
				double y2 = abs((((x2*(h + c) + h)*1.0)/ (2.0*x2 + 1)) - t);
				if (y1 <= y2)
					cout << 2*x1 + 1 << endl;
				else
					cout << 2*x2 + 1 << endl;
			// }
			// int x1 = -1, x2 = 0;
			// double y1, y2;
			// int decr = true;
			// do
			// {
			// 	x1 += 1;
			// 	x2 += 1;
			// 	y1 = abs((((x1*(h + c) + h)*1.0) / (2.0*x1 + 1)) - t);
			// 	y2 = abs((((x2*(h + c) + h)*1.0) / (2.0*x2 + 1)) - t);
			// } while (y2 < y1);
			// cout << 2*x1 + 1 << endl;
		}
	}
	return 0;
}
