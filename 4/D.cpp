#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;
typedef vector<int> vi;

int main(int argc, char const *argv[])
{
	int n, w, h;
	cin>>n>>w>>h;
	vector<pii> v;

	v.push_back(make_pair(w, h));
	map<pii, int> m;
	m[make_pair(w, h)] = 0;
 	for (int i = 0; i < n; i++){
 		int w1, h1;
		cin>>w1>>h1;

		if (w < w1 and h < h1){
			v.push_back(make_pair(w1, h1));
			m[make_pair(w1, h1)] = i + 1;
		}
	}

	sort(v.begin(), v.end());
	int vs = v.size();

	vector<int> dp(vs);
	vector<int> p(vs, 0);
	dp[0] = 0;
	p[0] = 0;
	for (int i = 1; i < vs; ++i){
		int max_length = 0;
		for (int j = 0; j < i; j++){
			if (v[i].first > v[j].first and v[i].second > v[j].second){
				max_length = max(max_length, dp[j]);
				if (max_length == dp[j]){
					p[i] = j;
				}
			}

		}

		dp[i] = max_length + 1;
		// printf("%i : %i %i\n", i, dp[i], p[i]);
	}

	int max_cl = 0;
	int ind;
	for (int i = 0; i < vs; ++i)
	{
		max_cl = max(max_cl, dp[i]);
		if (max_cl == dp[i]){
			ind = i;
		}
	}
	
	vi indices;

	while(p[ind] != 0){
		indices.push_back(ind);
		ind = p[ind];
	}
	if (ind != 0)
		indices.push_back(ind);

	reverse(indices.begin(), indices.end());

	cout<<max_cl<<endl;
	for (auto i = indices.begin(); i != indices.end(); ++i)
	{
		// cout<<(*i)<<" "<<v[(*i)].first<<" "<<v[(*i)].second<<" ";
		cout<<m[make_pair(v[(*i)].first, v[(*i)].second)]<<" ";
	}
	cout<<endl;
	return 0;
}