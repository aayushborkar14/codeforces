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
        for (int i = 0; i < n; i++)
            cin >> a.at(i);
        vector<int> a_sorted = a;
        sort(a_sorted.begin(), a_sorted.end());
        int can = true;
        for (int i = 0; i < n; i++)
        {
            if ((a.at(i) % 2 == 0) != (a_sorted.at(i) % 2 == 0))
            {
                can = false;
                break;
            }
        }
        if (can)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
