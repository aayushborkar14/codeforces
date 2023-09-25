#include <iostream>
#include <vector>
#include <cmath>
#include <utility>
#include <algorithm>

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
        vector<pair<int, int>> ds(n, pair<int, int>());
        for (int i = 0; i < n; i++)
            cin >> ds.at(i).first >> ds.at(i).second;
        sort(ds.begin(), ds.end());
        int k{1};
        int safe_steps = -1;
        bool broken = false;
        int d_idx = 0;
        for (k = 1; true; k++)
        {
            if (safe_steps != -1)
                safe_steps--;
            if (d_idx < n)
            {
                while (ds.at(d_idx).first == k)
                {
                    int loc_safe_steps{};
                    if (ds.at(d_idx).second % 2 == 0)
                        loc_safe_steps = ds.at(d_idx).second / 2 - 1;
                    else
                        loc_safe_steps = (ds.at(d_idx).second - 1) / 2;
                    if (safe_steps == -1)
                        safe_steps = loc_safe_steps;
                    else
                        safe_steps = min(safe_steps, loc_safe_steps);
                    d_idx++;
                    if (d_idx >= n)
                        break;
                }
            }
            if (safe_steps == 0)
                break;
        }
        cout << k << "\n";
    }
}
