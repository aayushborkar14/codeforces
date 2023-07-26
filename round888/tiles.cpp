#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    while (t--)
    {
        int n{}, k{};
        cin >> n >> k;
        vector<int> c(n, 0);
        int first{};
        int first_cnt{};
        int first_kth_occ = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> c.at(i);
            if (i == 0)
                first = c.at(i);
            if (c.at(i) == first)
            {
                first_cnt++;
                if (first_cnt == k)
                    first_kth_occ = i;
            }
        }
        int last{};
        int last_cnt{};
        int last_kth_occ = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (i == n - 1)
                last = c.at(i);
            if (c.at(i) == last)
            {
                last_cnt++;
                if (last_cnt == k)
                {
                    last_kth_occ = i;
                    break;
                }
            }
        }
        if (first == last)
        {
            if (first_cnt >= k)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
        {
            if (last_kth_occ > first_kth_occ && first_kth_occ != -1 && last_kth_occ != -1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}
