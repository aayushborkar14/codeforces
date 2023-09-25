#include <iostream>
#include <vector>

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
        vector<long long> s;
        long long uni{};
        for (int i = 0; i < n; i++)
        {
            int ki{}, temp{};
            long long si{};
            cin >> ki;
            for (int i = 0; i < ki; i++)
            {
                cin >> temp;
                si |= (1 << temp);
            }
            uni |= si;
            s.push_back(si);
        }
        int ans = 0;
        int siz = __builtin_popcount(uni);
        long long unic = uni;
        for (int i = 0; i < siz; i++)
        {
            int el = __builtin_ctz(unic);
            unic &= ~(1 << el);
            long long unio{};
            for (int j = 0; j < n; j++)
                if ((s.at(j) & (1 << el)) == 0)
                    unio |= s.at(j);
            if (unio != uni)
                ans = max(ans, __builtin_popcount(unio));
        }
        cout << ans << '\n';
    }
}
