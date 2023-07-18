#include <iostream>
#include <vector>

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
        int min = a.at(0);
        for (int i = 1; i < n; i++)
        {
            min &= a.at(i);
        }
        int min_groups{};
        if (min > 0)
            min_groups = 1;
        else
        {
            int pres{};
            bool next = true;
            for (int i = 0; i < n; i++)
            {
                if (next)
                {
                    next = false;
                    pres = a.at(i);
                    continue;
                }
                pres &= a.at(i);
                if (pres == 0)
                {
                    min_groups++;
                    next = true;
                }
            }
        }
        cout << min_groups << "\n";
    }
}
