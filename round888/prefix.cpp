#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

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
        vector<long long> a(n - 1, 0);
        for (int i = 0; i < n - 1; i++)
            cin >> a.at(i);
        long long last = n * (n + 1) / 2;
        bool ans = false;
        if (a.at(n - 2) != last)
        {
            a.push_back(last);
            vector<int> b(n, 0);
            b.at(0) = a.at(0);
            for (int i = 1; i < n; i++)
                b.at(i) = a.at(i) - a.at(i - 1);
            sort(b.begin(), b.end());
            bool ans = true;
            for (int i = 0; i < n; i++)
                if (b.at(i) != i + 1)
                {
                    ans = false;
                    break;
                }
        }
        else
        {
            vector<int> missing{};
            vector<int> b(n - 1, 0);
            b.at(0) = a.at(0);
            for (int i = 1; i < n - 1; i++)
                b.at(i) = a.at(i) - a.at(i - 1);
            sort(b.begin(), b.end());
            int dupli_num{};
            int dupli_count{};
            for (int i = 1; i < b.at(0); i++)
                missing.push_back(i);
            for (int i = 1; i < n - 1; i++)
            {
                if (b.at(i) != b.at(i - 1) + 1)
                    for (int i = b.at(i - 1) + 1; i < b.at(i) && i <= n; i++)
                        missing.push_back(i);
                else if (b.at(i) == b.at(i - 1))
                {
                    dupli_num = b.at(i);
                    dupli_count++;
                }
            }
            if (missing.size() == 2)
            {
                if (b.at(n - 2) > n)
                {
                    if (missing.at(0) + missing.at(1) == b.at(n - 2) && dupli_count == 0)
                        ans = true;
                }
                else
                {
                    if (dupli_count == 1 && dupli_num == missing.at(0) + missing.at(1))
                        ans = true;
                }
            }
        }
        if (ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
