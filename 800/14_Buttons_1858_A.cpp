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
        int a,b,c;
        cin>>a>>b>>c;
        bool anna_again=(c%2==0);
        if(anna_again){
            if(a>b){
                cout<<"First"<<'\n';
            }else{
                cout<<"Second"<<'\n';
            }
        }else{
            if(a>=b){
                cout<<"First"<<'\n';
            }else{
                cout<<"Second"<<'\n';
            }
        }
    }
    return 0;
}