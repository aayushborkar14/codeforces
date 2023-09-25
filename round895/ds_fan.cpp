#include <iostream>
#include <vector>
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
        int n{}, q{};
        string s{};
        cin >> n;
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++)
            cin >> a.at(i);
        cin >> s >> q;
        int tp{};
        vector<set<int>> indices(2, set<int>());
        int xor0{}, xor1{};
        int num0{}, num1{};
        for (int i = 0; i < n; i++)
            if (s.at(i) == '0')
            {
                num0++;
                xor0 = xor0 ^ a.at(i);
            }
            else
            {
                num1++;
                xor1 = xor1 ^ a.at(i);
            }
        while (q--)
        {
            cin >> tp;
            if (tp == 1)
            {
                int l{}, r{};
                cin >> l >> r;
                l--;
                r--;
                for (int i = l; i <= r; i++)
                    if (s.at(i) == '0')
                    {
                        s.at(i) = '1';
                        num0--;
                        num1++;
                        xor0 = xor0 ^ a.at(i);
                        xor1 = xor1 ^ a.at(i);
                    }
                    else
                    {
                        s.at(i) = '0';
                        num0++;
                        num1--;
                        xor0 = xor0 ^ a.at(i);
                        xor1 = xor1 ^ a.at(i);
                    }
            }
            else
            {
                int g{};
                cin >> g;
                if (g == 0)
                    cout << (num0 ? xor0 : 0) << ' ';
                else
                    cout << (num1 ? xor1 : 0) << ' ';
            }
        }
        cout << '\n';
    }
}
