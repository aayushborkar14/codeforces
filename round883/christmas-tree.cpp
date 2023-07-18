#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed;
    cout.precision(7);
    int t{};
    cin >> t;
    while (t--)
    {
        int n{}, d{}, h{};
        cin >> n >> d >> h;
        vector<int> y(n);
        for (int i = 0; i < n; i++)
            cin >> y.at(i);
        long double area = n * 0.5 * h * d;
        for (int i = 0; i < n - 1; i++)
            if (y.at(i + 1) - y.at(i) < h)
                area -= 0.5 * d * powl(h - y.at(i + 1) + y.at(i), 2) / h;
        cout << area << "\n";
    }
}
