#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int dp[46];

public:
    int func(int n)
    {
        if (n < 0)
            return 0; // base case
        if (n == 0)
            return 1;
        if (dp[n] != -1) 
            return dp[n]; // if already calculated
        return dp[n] = func(n - 1) + func(n - 2); // recursive case
    }
    int climbStairs(int n)
    {
        memset(dp, -1, sizeof(dp)); // initialize dp array with -1
        return func(n);
    }
};

int main()
{
    Solution ob;
    int n;
    cin >> n;
    cout << ob.climbStairs(n);
}