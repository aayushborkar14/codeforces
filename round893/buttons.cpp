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
        if (a == b)
        {
            if (c % 2 == 0)
                cout << "Second\n";
            else
                cout << "First\n";
        }
        else if (a > b)
            cout << "First\n";
        else
            cout << "Second\n";
    }
}
