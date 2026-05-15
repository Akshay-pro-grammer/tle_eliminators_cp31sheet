#include <bits/stdc++.h>
using namespace std;
int solve(int i, vector<int> &nums, vector<int> &dp);

//learning
/*since we were going from left to right in recursion 
(because recursion will get the righest answer first and give it to left ,
 top down analog) so in tabulation we need future results and
  hence we are starting from the back*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int &i : nums)
        {
            cin >> i;
        }

        vector<int> dp(n + 1, INT_MAX);
        // int minans=solve(0,nums,dp);

        dp[n]=0;

        for(int i=n-1;i>=0;i--){
            int del=1+dp[i+1];

            int keep=INT_MAX;

            if (i+nums[i]<n){
                keep = dp[i+nums[i]+1];
            }
            dp[i]=min(del,keep);
        }
        cout<<dp[0]<<'\n';
    }
    return 0;
}

int solve(int i, vector<int> &nums, vector<int> &dp)
{
    if (i == nums.size())
    {
        return 0;
    }
    if (i > nums.size())
    {
        return INT_MAX;
    }
    if (dp[i] != -1)
    {
        return dp[i];
    }
    int delthis = 1 + solve(i + 1, nums, dp);
    int dontdeletethis = solve(i + nums[i] + 1, nums, dp);
    return dp[i] = min(delthis, dontdeletethis);
}