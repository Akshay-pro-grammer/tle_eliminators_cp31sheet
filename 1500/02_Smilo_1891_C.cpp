#include <bits/stdc++.h>
using namespace std;
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
        cin>>n;
        vector<long long>nums(n,0);
        for(long long &i:nums){
            cin>>i;
        }
        long long sum=accumulate(nums.begin(),nums.end(),0LL);
        long long rem=sum/2;
        long long ans=sum-rem;
        sort(nums.rbegin(),nums.rend());
        int j=nums.size()-1;
        for(long long x:nums){
            if(rem<=0){
                break;
            }
            rem-=x;
            ans++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}
