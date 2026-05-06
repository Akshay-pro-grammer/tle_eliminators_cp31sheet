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
        unordered_map<int,int>st;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            st[temp]++;
        }
        if(st.size()>2){
            cout<<"NO"<<'\n';
        }else if(st.size()<2){
            cout<<"YES"<<'\n';
        }else{
            int freq=-1;
            bool check=false;
            for(auto [e,v]:st){
                if(freq==-1){
                    freq=v;
                }
                else if(freq!=-1 && abs(freq-v)<=1){
                    check=true;
                }
            }
            if(check){
                cout<<"YES"<<'\n';
            }else{
                cout<<"NO"<<'\n';
            }
        }
    }
    return 0;
}