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
        vector<int>nums(n);
        string str;
        for(int &i:nums) cin>>i;
        cin>>str;

        //q
        int q;
        cin>>q;
        vector<vector<int>>queries(q);
        for(auto i=0;i<q;i++){
            int num;
            cin>>num;
            if(num==1){
                int a,b;
                cin>>a>>b;
                queries[i]={num,a,b};
            }else{
                int bit;
                cin>>bit;
                queries[i]={num,bit};
            }
        }

        //start
        int x0=0,x1=0;
        for(int i=0;i<n;i++){
            if(str[i]=='0'){
                x0^=nums[i];
            }else{
                x1^=nums[i];
            }
        }

        vector<int>prefix(n);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]^nums[i];
        }

        for(auto &q:queries){
            if(q[0]==1){
                int l=q[1]-1,r=q[2]-1;
                int segmentprefix;
                if(l==0){
                    segmentprefix=prefix[r];
                }else{
                    segmentprefix=prefix[r]^prefix[l-1];
                }
                x1^=segmentprefix;
                x0^=segmentprefix;
            }else{
                int bit=q[1];
                if(bit==1){
                    cout<<x1<<' ';
                }else{
                    cout<<x0<<' ';
                }
            }
        }
        cout<<'\n';
    }
    return 0;
}