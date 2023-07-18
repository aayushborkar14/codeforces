#include <iostream>
#include <vector>

using namespace std;

vector<long long int> cnt;
vector<vector<int>> g;

void dfs(int v, int p)
{
    if (g.at(v).size() == 1 && g.at(v).at(0) == p)
        cnt.at(v) = 1;
    else
    {
        for (auto u : g.at(v))
        {
            if (u != p)
            {
                dfs(u, v);
                cnt.at(v) += cnt.at(u);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{}, n{}, q{};
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<bool> vis(n, false);
        g.clear();
        cnt.clear();
        g.assign(n, vector<int>());
        cnt.assign(n, 0);
        int u{}, v{};
        for (int i = 0; i < n - 1; i++)
        {
            cin >> u >> v;
            u--;
            v--;
            g.at(u).push_back(v);
            g.at(v).push_back(u);
        }
        dfs(0, -1);
        cin >> q;
        int x{}, y{};
        while (q--)
        {
            cin >> x >> y;
            cout << cnt.at(x - 1) * cnt.at(y - 1) << "\n";
        }
    }
}
