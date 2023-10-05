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
        int n{}, m{};
        cin >> n >> m;
        int app = n / m;
        if (m % gcd(n, m) == 0)
        {
            cout << __builtin_popcount((float)n / (float)m);
        }
        else
            cout << -1;
        cout << '\n';
    }
}
