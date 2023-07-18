#include <iostream>
#include <cmath>

using namespace std;

long long int rec(long long int n, long long int sum)
{
    if (n == 1)
        return (sum + 1);
    else if (n == 2)
        return (sum + 2 + 1);
    else if (n == 3)
        return (sum + 3 + 1);
    return rec(floor(n / 2), sum + n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    long long int n{};
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << rec(n, 0) << "\n";
    }
}
