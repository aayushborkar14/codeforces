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
        if (n % 3 == 0)
        {
            if (n >= 12)
                cout << "YES\n"
                     << 1 << ' ' << 4 << ' ' << (n - 5) << '\n';
            else
                cout << "NO\n";
        }
        else if (n % 3 == 1)
        {
            if (n >= 7)
                cout << "YES\n"
                     << 1 << ' ' << 2 << ' ' << (n - 3) << '\n';
            else
                cout << "NO\n";
        }
        else
        {
            if (n >= 8)
                cout << "YES\n"
                     << 1 << ' ' << 2 << ' ' << (n - 3) << '\n';
            else
                cout << "NO\n";
        }
    }
}
