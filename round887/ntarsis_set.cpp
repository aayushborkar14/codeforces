#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    while (t--)
    {
        int n{}, k{};
        cin >> n >> k;
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++)
            cin >> a.at(i);
        if (a.at(0) != 1)
            cout << 1 << "\n";
        else
        {
            long long j = 0, x = 1;
            while (k--)
            {
                while (j < n && a.at(j) <= x + j)
                    j++;
                x += j;
            }
            cout << x << "\n";
        }
    }
}
