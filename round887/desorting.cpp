#include <iostream>
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
        cin >> n;
        bool sorted = true;
        int ans{};
        int a_prev{};
        int a{};
        cin >> a_prev;
        int small_diff = INT_MAX;
        for (int i = 1; i < n; i++)
        {
            cin >> a;
            if (a < a_prev)
            {
                sorted = false;
            }
            else if (a - a_prev < small_diff)
                small_diff = a - a_prev;
            a_prev = a;
        }
        if (sorted)
        {
            if (small_diff % 2 == 0)
                ans = (small_diff / 2) + 1;
            else
                ans = (small_diff + 1) / 2;
        }
        cout << ans << "\n";
    }
}
