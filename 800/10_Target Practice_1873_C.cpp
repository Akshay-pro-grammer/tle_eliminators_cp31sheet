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
        vector<string> grid(10);
        for (int i = 0; i < 10; i++)
        {
            cin >> grid[i];
        }
        int count = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (grid[i][j] == 'X')
                {
                    // cout<<" found at: "<<i<<" "<<j<<" with count:: "<<count<<endl;
                    if (i == 0 || j == 0 || i == 9 || j == 9)
                    {
                        count++;
                    }
                    else if (i == 1 || j == 1 || i == 8 || j == 8)
                    {
                        count++;
                        count++;
                    }
                    else if (i == 2 || j == 2 || i == 7 || j == 7)
                    {
                        count++;
                        count++;
                        count++;
                    }
                    else if (i == 3 || j == 3 || i == 6 || j == 6)
                    {
                        count++;
                        count++;
                        count++;
                        count++;
                    }
                    else if (i == 4 || j == 4 || i == 5 || j == 5)
                    {
                        count++;
                        count++;
                        count++;
                        count++;
                        count++;
                    }
                }
            }
        }
        cout << count << '\n';
    }
    return 0;
}