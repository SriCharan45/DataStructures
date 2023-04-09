// Focus only on function created only one function for all three approach

#include <bits/stdc++.h>
using namespace std;

// Naive Approach

vector<int> solve(vector<int> arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == target)
                return {i, j};
        }
    }
    return {-1, -1};
}

// Optimal Approach

vector<int> solve(vector<int> arr, int target)
{
    sort(arr.begin(), arr.end());
    int l = 0, r = arr.size() - 1;
    while (l < r)
    {
        if (arr[l] + arr[r] == target)
            return {l, r};
        else if (arr[l] + arr[r] < target)
            l++;
        else
            r--;
    }
    return {-1, -1};
}

// Most Optimal Approach

vector<int> solve(vector<int> arr, int target)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < arr.size(); i++)
    {
        int diff = target - arr[i];
        if (mp.find(diff) != mp.end())
            return {mp[diff], i};
        else
            mp[arr[i]] = i;
    }
    return {-1, -1};
}

int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    vector<int> ans = solve(arr, target);
    for (auto it : ans)
        cout << it << " ";
    return 0;
}