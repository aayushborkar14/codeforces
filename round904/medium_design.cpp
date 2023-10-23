#include <iostream>
#include <vector>
#include <algorithm>
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
        int n{}, m{};
        cin >> n >> m;
        vector<pair<int, int>> segs;
        for (int i = 0; i < n; i++)
        {
            int l{}, r{};
            cin >> l >> r;
            l--;
            segs.emplace_back(l, r);
        }
        // case 1: 1st is minm
        vector<pair<int, int>> ls;
        for (int i = 0; i < n; i++)
        {
            if (segs.at(i).first == 0)
                continue;
            ls.emplace_back(segs.at(i).first, 1);
            ls.emplace_back(segs.at(i).second, -1);
        }
        sort(ls.begin(), ls.end());
        int ans{}, pres{}, last{};
        for (auto [a, b] : ls)
        {
            pres += b;
            ans = max(ans, pres);
        }
        // case 2: last is minm
        ls.clear();
        for (int i = 0; i < n; i++)
        {
            if (segs.at(i).second == m)
                continue;
            ls.emplace_back(segs.at(i).first, 1);
            ls.emplace_back(segs.at(i).second, -1);
        }
        sort(ls.begin(), ls.end());
        pres = 0, last = 0;
        for (auto [a, b] : ls)
        {
            pres += b;
            ans = max(ans, pres);
        }
        cout << ans << '\n';
    }
}
