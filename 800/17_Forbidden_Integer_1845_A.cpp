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
        int n, k, x;
        cin >> n >> k >> x;
        if (x != 1)
        {
            cout << "YES" << '\n';
            cout << n << '\n';
            while (n--)
            {
                cout << 1 << " ";
            }
            cout << '\n';
        }
        else
        {
            if (n % 2 == 0)
            {
                if (k >= 2)
                {
                    cout << "YES" << '\n';
                    cout << n/2 << '\n';
                    while (n)
                    {
                        cout << 2 << " ";
                        n -= 2;
                    }
                    cout << '\n';
                }
                else
                {
                    cout << "NO" << '\n';
                }
            }
            else
            {
                int availodd = (k>=3)?3:0;
                if (availodd != 0 && n - availodd >= 0)
                {
                    cout << "YES" << '\n';
                    cout << n/2 << '\n';
                    cout<<3<<" ";
                    n-=3;
                    while (n>0)
                    {
                        cout << 2 << " ";
                        n-=2;
                    }
                    cout << '\n';
                }else{
                    cout<<"NO"<<'\n';
                }
            }
        }
    }
    return 0;
}