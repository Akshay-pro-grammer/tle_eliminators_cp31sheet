#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int maxel=0;
        cin>>n;
        vector<int>ele(n);
        for(int i=0;i<n;i++){
            cin>>ele[i];
            maxel=max(maxel,ele[i]);
        }
        vector<int>b,c;
        for(int i:ele){
            if(i!=maxel){
                b.push_back(i);
            }else{
                c.push_back(i);
            }
        }
        if(b.size()==0){
            cout<<-1<<'\n';
        }
        else{
            cout<<b.size()<<" "<<c.size()<<'\n';
            for(int i:b){
                cout<<i<<" ";
            }
            cout<<'\n';
            for(int i:c){
                cout<<i<<" ";
            }
            cout<<'\n';
        }
    }
    return 0;
}