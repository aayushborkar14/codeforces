#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a.at(i);
        sort(a.begin(), a.end());
        vector<int> counts{};
        int count = 1;
        for (int i = 1; i < n; i++)
        {
            if (a.at(i) - a.at(i - 1) > k)
            {
                counts.push_back(count);
                count = 1;
            }
            else
                count++;
        }
        for (auto c : counts)
        {
            if (c > count)
                count = c;
        }
        cout << n - count << "\n";
    }
}
