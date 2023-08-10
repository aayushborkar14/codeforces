#include <iostream>
#include <vector>

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
        vector<int> a(n, 0);
        vector<int> b(n, 0);
        vector<int> c(n, 0);
        for (int i = 0; i < n; i++)
            cin >> a.at(i);
        for (int i = 0; i < n; i++)
        {
            cin >> b.at(i);
            c.at(i) = a.at(i) - b.at(i);
        }
        int greatest = c.at(0);
        for (auto el : c)
            if (greatest < el)
                greatest = el;
        int ans{};
        vector<int> ans_vec{};
        for (int i = 0; i < n; i++)
            if (c.at(i) == greatest)
            {
                ans++;
                ans_vec.push_back(i + 1);
            }
        cout << ans << "\n";
        for (auto el : ans_vec)
            cout << el << " ";
        cout << "\n";
    }
}
