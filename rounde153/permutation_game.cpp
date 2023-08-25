#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    while (t--)
    {
        int n{};
        cin >> n;
        vector<int> p(n, 0);
        for (int i = 0; i < n; i++)
            cin >> p.at(i);
        int ans{};
        int mn = n + 1;
        int mnwin = n + 1;
        for (auto el : p)
        {
            if (el > mn && el < mnwin)
            {
                mnwin = el;
                ans++;
            }
            mn = min(mn, el);
        }
        cout << ans << "\n";
    }
}
