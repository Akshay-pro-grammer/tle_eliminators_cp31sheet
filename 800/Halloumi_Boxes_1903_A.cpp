#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        if(k==1){
            bool isSorted=true;
            for(int i=0;i<n-1;i++){
                if(nums[i]>nums[i+1]){
                    isSorted=false;
                }
            }
            if(isSorted){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
