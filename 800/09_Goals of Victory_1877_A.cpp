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
        cin >> n;
        n--;
        int sum=0;
        while (n--)
        {
            int temp;
            cin >> temp;
            sum += temp;
        }
        cout << -1 * sum << '\n';
    }
    return 0;
}