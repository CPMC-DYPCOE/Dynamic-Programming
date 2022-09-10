#include<bits/stdc++.h>
using namespace std;

int solve(int ind, int prev_ind, int arr[], int n, vector<vector<int>> &dp) {
    if(ind == n) return 0; // BASE CASE

    // MEMOIZATION
    if(dp[ind][prev_ind+1] != -1) return dp[ind][prev_ind+1];
    
    
    int len = 0 + solve(ind+1, prev_ind, arr, n, dp);            // NOT TAKING CASE
    
    
    if(prev_ind == -1 || arr[ind] > arr[prev_ind]) {            //TAKE CASE
        len = max(len , 1 + solve(ind+1, ind, arr, n, dp));
    }
    return dp[ind][prev_ind + 1] = len;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
  
    vector<vector<int>> dp(n, vector<int>(n+1, -1));
    int ans = solve(0, -1, arr, n, dp);
    cout << ans << endl;
}
