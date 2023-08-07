#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    while (t--)
    {
        int n{};
        cin >> n;
        int temp{};
        long long sum{};
        int n_one{};
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            sum += temp;
            if (temp == 1)
                n_one++;
        }
        if (n == 1)
            cout << "NO\n";
        else
        {
            if (sum >= n_one + n)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}
