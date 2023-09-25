#include <iostream>
#include <vector>
#include <cmath>

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
        cout << ceil((abs(a - b) / 2.0) / c) << "\n";
    }
}
