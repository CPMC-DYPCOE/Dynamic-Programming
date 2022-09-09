//Problem Statement -> Your task is to count the number of ways to construct sum n by throwing a dice one or more times.
//Each throw produces an outcome between 1 and 6.

#include <bits/stdc++.h>
using namespace std;

// Let's define the four important things before diving into the solution
// 1) State -> dp[i] where it signifies the number of ways to construct sum i
// 2) Transition -> dp[i] = dp[i] + dp[i-1] + dp[i-2] + ... + dp[i-6]
// 3) Base case -> dp[i<0] = 0 && dp[0] = 1
// 4) Final subproblem -> dp[n] (number of ways to construct sum n)

//Time complexity -> O(n)

const int N = 1000010;
const int M = 1000000007;

int dp[N];

int numberOfWays(int i){

    //Base cases
    if (i < 0) return 0;      // if i is negative, there is no way to construct given sum because a dice throw caannot be negative
    if (i == 0) return 1;    //if i is 0, there is only one way to construct sum 0 which is not throwing dice at all

    //Memoisation
    if (dp[i] != -1) return dp[i];    //if we have already calculated the number of ways to construct sum i, we will use the stored ans instead of computing it again

    dp[i] = 0;                                      //initializing number of ways to construct sum i to 0
    for (int j = 1; j <= 6; j++){                  //for loop to iterate 6 times for each possible dice throw
        dp[i] = (dp[i] + numberOfWays(i-j))%M;    //transition
        // we're supposed to print the answer modulo 10^9+7
    }

    return dp[i];          //returning the number of ways to construct sum i which will be stored in dp[i]
}

void solve(){
    int n;
    cin >> n;                             //the sum we need to construct
  
    memset(dp, -1, sizeof(dp));          //intializing dp array with -1
    cout << numberOfWays(n) << endl;    //printing the final subproblem

}

int main() {
    solve();
    return 0;
}
