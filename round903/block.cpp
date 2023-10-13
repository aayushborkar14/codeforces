#include <iostream>
#include <vector>
#include <utility>

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
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++)
            cin >> a.at(i);
        vector<int> dp(n + 1, n);
        dp.at(n) = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            dp.at(i) = dp.at(i + 1) + 1;
            if (i + a.at(i) < n)
                dp.at(i) = min(dp.at(i), dp.at(i + a.at(i) + 1));
        }
        cout << dp.at(0) << '\n';
    }
}
