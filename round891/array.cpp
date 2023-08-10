#include <iostream>
#include <vector>
#include <algorithm>

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
        int num_odd{};
        int num_even{};
        for (int i = 0; i < n; i++)
        {
            cin >> a.at(i);
            if (a.at(i) % 2 == 0)
                num_even++;
            else
                num_odd++;
        }
        if (num_odd % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
