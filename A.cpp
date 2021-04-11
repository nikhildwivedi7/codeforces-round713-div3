#include <iostream>
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int x = arr[0];
        for (int i = 0; i < 3; i++)
        {
            if (arr[i] == x)
                count++;
        }
        if (count == 3)
        {
            for (int i = 3; i < n; i++)
            {
                if (arr[i] != x)
                {
                    cout << (i + 1);
                    break;
                }
            }
        }
        else
        {
            if (count == 2)
            {
                for (int i = 0; i < 3; i++)
                {
                    if (arr[i] != x)
                    {
                        cout << (i + 1);
                        break;
                    }
                }
            }
            else
            {
                cout << 1;
            }
        }
        cout << "\n";
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
