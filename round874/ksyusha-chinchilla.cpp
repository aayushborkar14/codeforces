#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{}, n{};
    cin >> t;
    while (t--)
    {
        cin >> n;
        int vi{}, ui{};
        map<int, set<int>> g{};
        for (int i = 0; i < n; i++)
        {
            cin >> vi >> ui;
            g[vi].insert(ui);
            g[ui].insert(vi);
        }
    }
}
