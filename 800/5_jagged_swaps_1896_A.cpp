#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        int minel=1000000;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            minel=min(arr[i],minel);
        }
        if(arr[0]==minel){
            cout<<"YES"<<'\n';
        }else{
            cout<<"NO"<<'\n';
        }

    }
    return 0;
}
