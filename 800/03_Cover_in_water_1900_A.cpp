#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        // cout<<"got string: "<<s<<endl;
        int ans=0;
        int dotcount=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                dotcount++;
            }
            if(s[i]=='#'){
                if(dotcount<=2){
                    ans+=dotcount;
                    dotcount=0;
                }else{
                    ans=2;
                    dotcount=0;
                    break;
                }
            }
        }

        if(dotcount<=2){
            ans+=dotcount;
        }else{
            ans=2;
        }

        cout<<ans<<endl;
    }
    return 0;
}
