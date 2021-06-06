#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v;
		while(n != 0){
			v.push_back(n%10);
			n = n / 10;
		}
		reverse(v.begin(), v.end());
		int non0 = 0;
		for (auto i = v.begin(); i != v.end(); ++i)
		{
			if ((*i) != 0)
				non0 += 1;
		}
		cout << non0 << endl;
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i] != 0)
				cout << v[i] * pow(10, v.size() - i - 1) << " ";
		}
		cout << endl;
	}
	return 0;
}