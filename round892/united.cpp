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
        bool all_are_same = true;
        vector<int> a(n, 0);
        cin >> a.at(0);
        for (int i = 1; i < n; i++)
        {
            cin >> a.at(i);
            if (a.at(i) != a.at(i - 1))
                all_are_same = false;
        }
        if (all_are_same)
            cout << -1 << "\n";
        else
        {
            sort(a.begin(), a.end());
            int first_occur{};
            for (int i = 0; i < n; i++)
                if (a.at(i) == a.at(n - 1))
                {
                    first_occur = i;
                    break;
                }
            cout << first_occur << " " << n - first_occur << "\n";
            for (int i = 0; i < first_occur; i++)
                cout << a.at(i) << " ";
            cout << "\n";
            for (int i = first_occur; i < n; i++)
                cout << a.at(i) << " ";
            cout << "\n";
        }
    }
}
