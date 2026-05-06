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
        int n, m;
        cin >> n >> m;
        string x, a;
        cin >> x >> a;

        int count = 0;
        bool found = false;


        while (x.size() < a.size()) {
            x += x;
            count++;
        }

        for (int i = 0; i <= 2; i++) {
            if (x.find(a) != string::npos) {
                cout << count << '\n';
                found = true;
                break;
            }
            x += x;
            count++;
        }

        if (!found) cout << -1 << '\n';
    }
}