#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

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
        long long c{};
        cin >> n >> c;
        int l = 0;
        int r = ceil(sqrt(c / n) / 2);
        vector<long long> vals(n);
        for (int i = 0; i < n; i++)
            cin >> vals.at(i);
        long long w{};
        while (true)
        {
            w = l + ((r - l) >> 1);
            long long calc_c = 0;
            for (auto s : vals)
            {
                calc_c += (s + 2 * w) * (s + 2 * w);
                if (calc_c > c)
                    break;
            }
            if (calc_c > c)
                r = w - 1;
            else if (calc_c < c)
                l = w + 1;
            else if (calc_c == c)
                break;
        }
        cout << w << "\n";
    }
}
