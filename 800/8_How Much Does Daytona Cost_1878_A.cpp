#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        bool found=false;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
            if(nums[i]==k){
                found=true;
            }
        }

        if(found){
            cout<<"YES"<<'\n';
        }else{
            cout<<"NO"<<'\n';
        }
    }
    return 0;
}