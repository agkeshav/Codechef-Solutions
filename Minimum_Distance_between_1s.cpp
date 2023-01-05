#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin >> n;
	string a;
	cin >> a;
	vector<int> index;
	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i] == '1')
		{
			index.push_back(i);
		}
	}
	sort(index.begin(), index.end());
	int final = index[index.size() - 1];
	bool flag = false;
	for (int i = 0; i < index.size() - 1; i++)
	{
		int diff = final - index[i];
		if (diff & 1)
		{
			flag = true;
			break;
		}
	}
	if (flag)
	{
		cout << 1 << endl;
	}
	else
	{
		cout << 2 << endl;
	}
}
int main()
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}
