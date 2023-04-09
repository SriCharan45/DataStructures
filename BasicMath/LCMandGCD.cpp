// Iterative Approach :

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int lcm, gcd;
    // GCD
    int a = num1, b = num2;
    while (num1)
    {
        int temp = num1;
        num1 = num2 % num1;
        num2 = temp;
    }
    gcd = num2;
    // LCM
    lcm = (a * b) / gcd;
    cout << lcm << " " << gcd;
    return 0;
}

// Recursive Approach :

#include <bits/stdc++.h>
using namespace std;

int GCD(int num1, int num2)
{
    if (num1 == 0)
        return num2;
    return GCD(num2 % num1, num1);
}

int LCM(int num1, int num2)
{
    return (num1 * num2) / GCD(num1, num2);
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int res1 = LCM(num1, num2);
    int res2 = GCD(num1, num2);
    cout << res1 << " " << res2;
    return 0;
}