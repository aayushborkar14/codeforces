#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

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
        vector<pair<int, int>> a(n, pair<int, int>());
        for (int i = 0; i < n; i++)
        {
            cin >> a.at(i).first;
            a.at(i).second = i;
        }
        sort(a.begin(), a.end());
        vector<int> locs(n, -1);
        for (int i = 0; i < n; i++)
            locs.at(a.at(i).second) = i;
        for (auto loc : locs)
            cout << n - loc << " ";
        cout << "\n";
    }
}
