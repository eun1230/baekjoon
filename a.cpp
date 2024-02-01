#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    int ans = 0;
    cin >> x >> y;
    if ((abs(x - y) == 1) && (x % 4 == 0 || y % 4 == 0))
    {
        ans = 4;
        cout << "1\n";
    }
    else if ((abs(x - y) == 1) && (y % 4 != 0 || x % 4 != 0))
    {
        ans = 1;
        cout << "2\n";
    }
    else
    {
        if (x % 4 != 0 && y % 4 != 0)
        {
            ans = (abs((x / 4) - (y / 4))) + abs(((x % 4) - (y % 4)));
            cout << "3-1\n";
        }
        else if ((x % 4 == 0) || (y % 4 == 0))
        {
            int a = x % 4 == 0 ? 4 : x % 4;
            int b = y % 4 == 0 ? 4 : y % 4;

            if (a != 4 && b == 4)
                ans = (abs((x / 4) - (y / 4))) + abs(a - b) - 1;
            else if (a == 4 && b != 4)
                ans = (abs((x / 4) - (y / 4))) + abs(a - b) + 1;
            cout << "3-2\n";
        }
    }
    ans = abs(ans);
    cout << ans;
    return 0;
}
