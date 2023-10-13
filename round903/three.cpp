#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    while (t--)
    {
        long long a{}, b{}, c{};
        cin >> a >> b >> c;
        long long the_gcd = gcd(a, gcd(b, c));
        if ((a / the_gcd) + (b / the_gcd) + (c / the_gcd) <= 6)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
