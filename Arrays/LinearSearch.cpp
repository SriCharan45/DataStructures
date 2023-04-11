#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> &arr, int k)
{
    for (auto it : arr)
    {
        if (it == k)
            return true;
    }
    return false;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    bool ans = solve(arr, k);
    cout << ans;
    return 0;
}