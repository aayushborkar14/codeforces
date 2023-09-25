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
        int l{}, r{};
        cin >> l >> r;
        if (l <= 3)
        {
            if (r >= 4)
                cout << 2 << " " << 2 << "\n";
            else
                cout << -1 << "\n";
        }
        else if (l == r)
        {
            if (l % 2 == 0)
                cout << l / 2 << " " << l / 2 << "\n";
            else
            {
                bool is_prime = true;
                int divisor{};
                for (int i = 3; i <= sqrt(l); i++)
                    if (l % i == 0)
                    {
                        divisor = i;
                        is_prime = false;
                        break;
                    }
                if (!is_prime)
                {
                    int other_divisor = l / divisor;
                    cout << other_divisor << " " << other_divisor * (divisor - 1) << "\n";
                }
                else
                    cout << -1 << "\n";
            }
        }
        else
        {
            if (l % 2 != 0)
                l++;
            cout << l / 2 << " " << l / 2 << "\n";
        }
    }
}
