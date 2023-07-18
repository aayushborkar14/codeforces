#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{}, n{}, m{}, q{}, x{};
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        vector<pair<int, int>> lr(m);
        int li{}, ri{};
        for (int i = 0; i < m; i++)
        {
            cin >> li >> ri;
            li--;
            ri--;
            lr.at(i) = make_pair(li, ri);
        }
        cin >> q;
        bool beaut = false;
        vector<int> b(q);
        for (int i = 0; i < q; i++)
        {
            cin >> b.at(i);
            b.at(i)--;
        }
        int low = 0;
        int high = q - 1;
        bool eq = false;
        while ((high >= low) && !eq)
        {
            if (high == low)
                eq = true;
            vector<int> pref(n, 0);
            vector<int> arr(n, 0);
            bool ok = false;
            int mid = (low + high) >> 1;
            for (int i = 0; i <= mid; i++)
                arr.at(b.at(i)) = 1;
            pref.at(0) = arr.at(0);
            for (int i = 1; i < n; i++)
                pref.at(i) = pref.at(i - 1) + arr.at(i);
            for (auto pai : lr)
            {
                int len = pai.second - pai.first + 1;
                int sum{};
                if (pai.first == 0)
                    sum = pref.at(pai.second);
                else
                    sum = pref.at(pai.second) - pref.at(pai.first - 1);
                if (sum > len / 2)
                {
                    ok = true;
                    break;
                }
            }
            if (ok == true)
            {
                high = mid;
                beaut = true;
            }
            else
                low = mid + 1;
        }
        if (beaut)
            cout << high + 1 << "\n";
        else
            cout << -1 << "\n";
    }
}
