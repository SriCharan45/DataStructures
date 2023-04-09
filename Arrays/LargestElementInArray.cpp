// Using Sorting
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> arr;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		arr.push_back(x);
	}
	sort(arr.begin(), arr.end());
	cout << arr[arr.size() - 1];
	return 0;
}

// Using max variable

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> arr;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		arr.push_back(x);
	}
	int max = INT_MIN;
	for (auto it : arr)
	{
		if (max < it)
			max = it;
	}
	cout << max;
	return 0;
}