#include <iostream>
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0, x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> n;
        char arr[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == '*' && count == 0)
                {
                    x1 = i;
                    y1 = j;
                    count++;
                }
                else if (arr[i][j] == '*' && count == 1)
                {
                    x2 = i;
                    y2 = j;
                }
            }
        }
        if (x1 == x2 || y1 == y2)
        {
            if (x1 == x2)
            {
                if (x1 + 1 < n)
                {
                    x3 = x1 + 1;
                    x4 = x1 + 1;
                }
                else
                {
                    x3 = x1 - 1;
                    x4 = x1 - 1;
                }
                y3 = y1;
                y4 = y2;
            }
            else
            {
                if (y1 + 1 < n)
                {
                    y3 = y1 + 1;
                    y4 = y1 + 1;
                }
                else
                {
                    y3 = y1 - 1;
                    y4 = y1 - 1;
                }
                x3 = x1;
                x4 = x2;
            }
        }
        else
        {
            x3 = x2;
            y3 = y1;
            x4 = x1;
            y4 = y2;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == x1 && j == y1)
                    cout << "*";
                else if (i == x2 && j == y2)
                    cout << "*";
                else if (i == x3 && j == y3)
                    cout << "*";
                else if (i == x4 && j == y4)
                    cout << "*";
                else
                    cout << ".";
            }
            cout << "\n";
        }
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    // for etting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    solve();

    return 0;
}
