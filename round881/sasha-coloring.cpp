#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{}, n{};
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a.at(i);
        sort(a.begin(), a.end());
        int ans{};
        if (n % 2 == 0)
        {
            for (int i = n - 1; i >= n / 2; i--)
                ans += a.at(i);
            for (int i = 0; i < n / 2; i++)
                ans -= a.at(i);
        }
        else
        {
            for (int i = n - 1; i >= (n + 1) / 2; i--)
                ans += a.at(i);
            for (int i = 0; i < (n - 1) / 2; i++)
                ans -= a.at(i);
        }
        cout << ans << "\n";
    }
}
