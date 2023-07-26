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
        int n{}, m{}, k{}, H{};
        cin >> n >> m >> k >> H;
        vector<int> h(n, 0);
        for (int i = 0; i < n; i++)
            cin >> h.at(i);
        int ans{};
        int max_diff = (m - 1) * k;
        for (auto hi : h)
            if (abs(H - hi) <= max_diff && abs(H - hi) % k == 0 && H != hi)
                ans++;
        cout << ans << "\n";
    }
}
