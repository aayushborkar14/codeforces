#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    while (t--)
    {
        string a{}, b{};
        cin >> a >> b;
        bool ans = false;
        for (int i = 0; i < a.length() - 1; i++)
            if (a.at(i) == '0' && a.at(i + 1) == '1' && b.at(i) == '0' && b.at(i + 1) == '1')
            {
                ans = true;
                break;
            }
        if (ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
