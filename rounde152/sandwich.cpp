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
        int b{}, c{}, h{};
        cin >> b >> c >> h;
        if (b > h + c + 1)
            cout << (h + c) + (h + c + 1) << "\n";
        else
            cout << b + (b - 1) << "\n";
    }
}
