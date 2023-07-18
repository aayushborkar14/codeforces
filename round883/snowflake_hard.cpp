#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    vector<long long> poss;
    for (int k = 2; k < pow(10, 6); k++)
    {
        int n = pow(k, 2);
        int s = 1 + k + n;
        for (int p = 3; p < 64; p++)
        {
            n *= k;
            s += n;
            if (s > pow(10, 18))
                break;
            poss.push_back(s);
        }
    }
    sort(poss.begin(), poss.end());
    while (t--)
    {
        long long n{};
        cin >> n;
        if (n < 7)
            cout << "NO\n";
        else if (binary_search(poss.begin(), poss.end(), n))
            cout << "YES\n";
        else
        {
            long double k = (-1 + sqrt(4 * n - 3)) / 2;
            if (k == floorl(k))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}
