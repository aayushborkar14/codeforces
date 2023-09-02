#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

bool is_prime(int a)
{
    int ans = true;
    for (int i = 2; i <= sqrt(a); i++)
        if (a % 2 == 0)
        {
            ans = false;
            break;
        }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    while (t--)
    {
        string s{};
        cin >> s;
        bool one_b_seven = true;
        bool one_occur = false;
        bool seven_occur = false;
        for (auto c : s)
        {
            if (c == '1')
                one_occur = true;
            else if (c == '7')
                seven_occur = true;
            if (seven_occur && !one_occur)
            {
                one_b_seven = false;
                break;
            }
        }
        if (one_b_seven)
            cout << 17 << "\n";
        else
            cout << 71 << "\n";
    }
}
