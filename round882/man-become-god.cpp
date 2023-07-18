#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int diff(int a, int b)
{
    if (a > b)
        return a - b;
    return b - a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    int n{}, k{};
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        vector<int> a(n);
        vector<int> diffs(n - 1);
        int ans{};
        for (int i = 0; i < n; i++)
        {
            cin >> a.at(i);
            if (i != 0)
                diffs.at(i - 1) = diff(a.at(i), a.at(i - 1));
        }
        sort(diffs.begin(), diffs.end());
        for (int i = 0; i < n - k; i++)
            ans += diffs.at(i);
        cout << ans << "\n";
    }
}
