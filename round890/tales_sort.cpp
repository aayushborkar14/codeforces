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
        int n{};
        cin >> n;
        vector<int> a(n, 0);
        int r{};
        for (int i = 0; i < n; i++)
        {
            cin >> a.at(i);
            if (a.at(i) > r)
                r = a.at(i);
        }
        int l{};
        int m{};
        while (true)
        {
            vector<int> ac = a;
            if (r - l == 1)
            {
                m = r;
                for (int i = 0; i < n; i++)
                    ac.at(i) = max(0, ac.at(i) - l);
                bool sorted = true;
                for (int i = 1; i < n; i++)
                    if (ac.at(i) < ac.at(i - 1))
                    {
                        sorted = false;
                        break;
                    }
                if (sorted)
                    m = l;
                break;
            }
            m = (l + r) >> 1;
            for (int i = 0; i < n; i++)
                ac.at(i) = max(0, ac.at(i) - m);
            bool sorted = true;
            for (int i = 1; i < n; i++)
                if (ac.at(i) < ac.at(i - 1))
                {
                    sorted = false;
                    break;
                }
            if (sorted)
                r = m;
            else
                l = m;
        }
        cout << m << "\n";
    }
}
