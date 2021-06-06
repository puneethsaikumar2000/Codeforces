#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v(n+1, 0);
		for (int i = 1; i <= n; ++i)
		{
			cin >> v[i];
		}
		vector<pair<vector<int>, int> > a;
		for (int i = 1; i <= n; ++i)
		{
			// printf("i: %i  v[i]: %i\n", i, v[i]);
			bool div = false;
			for (int j = 0; j < a.size(); ++j)
			{
				if (i % a[j].second != 0)
					continue;
				int len = a[j].first.size();
				if (a[j].first[len-1] < v[i]){
					vector<int> v2(a[j].first);
					// v2 = a[j].first;
					v2.push_back(v[i]);
					// a[j].second = i;
					a.push_back(make_pair(v2, i));
					div = true;
					// cout << "pushed into " << j << endl;
					// for (auto it = a[j].first.begin(); it != a[j].first.end(); ++it)
					// {
					// 	cout << (*it) << " ";
					// }
					// cout << endl;
				}
			}
			if (!(div)){
				// cout << "not pushed\n";
				vector<int> v1;
				v1.push_back(v[i]);
 				a.push_back(make_pair(v1, i));
			}
		}
		int ans = 1;
		for (auto i = a.begin(); i != a.end(); ++i)
		{
			int l = (*i).first.size();
			ans = max(ans, l);
		}
		cout << ans << endl;
	}
	return 0;
}