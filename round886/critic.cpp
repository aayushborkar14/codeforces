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
        int a{}, b{}, c{};
        cin >> a >> b >> c;
        bool can = false;
        if (a + b >= 10)
            can = true;
        if (b + c >= 10)
            can = true;
        if (c + a >= 10)
            can = true;
        if (can)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
