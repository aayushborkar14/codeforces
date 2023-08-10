#include <iostream>
#include <vector>
#include <algorithm>
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
        vector<int> x(n, 0);
        for (int i = 0; i < n; i++)
            cin >> x.at(i);
        int ans{};
        for (auto s : x)
        {
            long long ans{};
            for (auto sd : x)
                ans += abs(sd - s) + 1;
            cout << ans << " ";
        }
        cout << "\n";
    }
}
