#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{}, n{};
    cin >> t;
    while (t--)
    {
        int temp{};
        int b{}, c{}; // bamboos, cycles
        cin >> n;
        vector<set<int>> a(n);
        vector<bool> vis(n);
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            temp--;
            a.at(i).insert(temp);
            a.at(temp).insert(i);
        }
        for (int i = 0; i < n; i++)
        {
            if (!vis.at(i))
            {
                queue<int> q;
                q.push(i);
                vis.at(i) = 1;
                vector<int> component = {i};
                while (!q.empty())
                {
                    int u = q.front();
                    q.pop();
                    for (int v : a.at(u))
                    {
                        if (!vis.at(v))
                        {
                            vis.at(v) = 1;
                            q.push(v);
                            component.push_back(v);
                        }
                    }
                }
                bool bamboo = 0;
                for (int j : component)
                    if (a.at(j).size() == 1)
                    {
                        bamboo = 1;
                        break;
                    }
                if (bamboo)
                    b++;
                else
                    c++;
            }
        }
        cout << c + min(b, 1) << " " << c + b << "\n";
    }
}
