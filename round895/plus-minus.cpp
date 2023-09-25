#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long lcm(long long a, long long b)
{
    long long prod = a;
    prod *= b;
    long long temp1 = max(a, b);
    long long temp2 = min(a, b);
    a = temp1;
    b = temp2;
    while (a % b != 0)
    {
        long long c = b;
        b = a % b;
        a = c;
    }
    long long ans = prod / b;
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t{};
    cin >> t;
    while (t--)
    {
        long long n{}, x{}, y{};
        cin >> n >> x >> y;
        long long nbyx = n / x;
        long long nbyy = n / y;
        long long lcm_x_y = lcm(x, y);
        long long nbylcm = n / lcm_x_y;
        long long blue = nbyx - nbylcm;
        long long red = nbyy - nbylcm;
        long long ans = ((2 * n) - (blue - 1)) * blue / 2 - red * (red + 1) / 2;
        cout << ans << "\n";
    }
}
