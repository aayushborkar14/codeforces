#include <iostream>
#include <vector>

using namespace std;

int digital_sum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    while (t--)
    {
        int x{}, k{};
        cin >> x >> k;
        for (;; x++)
            if (digital_sum(x) % k == 0)
                break;
        cout << x << '\n';
    }
}
