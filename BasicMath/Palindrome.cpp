// Problem Link : https://practice.geeksforgeeks.org/problems/palindrome0746/1

#include <bits/stdc++.h>
using namespace std;

string is_palindrome(int n)
{
    string str1 = to_string(n), str2 = to_string(n);
    int l = 0, r = str2.size() - 1;
    while (l < r)
    {
        swap(str2[l++], str2[r--]);
    }
    return (str1 == str2) ? "Yes" : "No";
}

int main()
{
    int n;
    cin >> n;
    string ans = is_palindrome(n);
    cout << ans;
    return 0;
}