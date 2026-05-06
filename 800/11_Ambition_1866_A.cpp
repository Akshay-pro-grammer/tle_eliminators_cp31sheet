#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>nums(n);
    int minel=INT_MAX;
    for(int i=0;i<nums.size();i++){
        cin>>nums[i];
        minel=min(minel,abs(nums[i]));
    }
    cout<<minel<<'\n';
    return 0;
}