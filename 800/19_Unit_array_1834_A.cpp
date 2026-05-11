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
        cin>>n;
        int sum=0;
        int pos=0,neg=0;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            sum+=temp;
            if(temp==-1){
                neg++;
            }else{
                pos++;
            }
        }
        int ans=0;
        while(neg>pos){
            neg--;
            pos++;
            sum+=2;
            ans++;
        }
        if(neg%2!=0){
            neg--;
            pos++;
            ans++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}