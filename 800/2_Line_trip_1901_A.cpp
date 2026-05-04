#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        int ans=abs(nums[n-1]-x)*2;
        ans=max(ans,nums[0]);
        for(int i=1;i<n;i++){
            ans=max(ans,nums[i]-nums[i-1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
