#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
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
        vector<int>a(n),b(n);
        for(int &i:a)cin>>i;
        for(int &i:b)cin>>i;

        //prefix sum
        vector<int>psum(n);
        psum[0]=b[0];
        for(int i=1;i<n;i++){
            psum[i]=psum[i-1]+b[i];
        }

        //difference array and partial array
        vector<int>dfar(n+1),parr(n);

        for(int i=0;i<n;i++){
            int prev=(i==0)?0:psum[i-1];
            int j=upper_bound(psum.begin(),psum.end(),a[i]+prev)-psum.begin();

            dfar[i]+=1;
            if(j<n){

                dfar[j]--;
                int consumed = (j==0 ? 0 : psum[j-1]) - prev;
                parr[j] += a[i] - consumed;
            }
        }

        //calculate diff
        for(int i=1;i<=n;i++){
            dfar[i]+=dfar[i-1];
        }

        for(int i=0;i<n;i++){
            cout<<1ll*b[i]*dfar[i]+parr[i]<<" ";
        }
        cout<<'\n';

    }
    return 0;
}