#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    while (t--)
    {
        int n{}, temp{};
        cin >> n;
        vector<long long> cnt(n + 1, 0);
        vector<bool> divnot(n + 1, true);
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (!cnt.at(temp))
                for (int j = temp; j <= n; j += temp)
                    divnot.at(j) = false;
            cnt.at(temp)++;
        }
        vector<long long> dpv(n + 1, -1);
        auto dp = [&](int g, auto &&dp) -> long long
        {
            if (dpv.at(g) != -1)
                return dpv.at(g);
            long long s{};
            for (int i = 1; i * (long long)g <= n; i++)
                s += cnt.at(i * g);
            dpv.at(g) = s * (s - 1) / 2;
            for (int i = 2; i * (long long)g <= n; i++)
                dpv.at(g) -= dp(i * g, dp);
            return dpv.at(g);
        };
        long long ans{};
        for (int i = 1; i <= n; i++)
            if (divnot.at(i))
                ans += dp(i, dp);
        cout << ans << '\n';
    }
}
