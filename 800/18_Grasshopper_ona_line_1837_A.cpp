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
        int n,k;
        cin>>n>>k;
        if(n%k!=0){
            cout<<1<<'\n';
            cout<<n<<'\n';
        }else{
            cout<<2<<'\n';
            cout<<n-1<<" "<<1<<'\n';
        }
    }
    return 0;
}