#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;



int main()
{

	cin.tie(NULL);
	ios::sync_with_stdio(false);
	vector<pair<int, int>> pv;
	int a = 0;
	cin >> a;
	int b, c;
	for (int i = 0; i < a; i++)
	{
		cin >> b >> c;
		pv.push_back(make_pair(b, c));
		sort(pv.begin(), pv.end());
	}
	for (auto iter = pv.begin(); iter != pv.end(); iter++)
	{
		cout << iter->first << " " << iter->second <<'\n';
	}

	return 0;
}