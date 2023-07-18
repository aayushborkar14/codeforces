#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <cmath>
#include <queue>
#include <climits>

using namespace std;

class Medicine
{
public:
    int days;
    int cures;
    int infects;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    while (t--)
    {
        int n{}, m{};
        cin >> n >> m;
        string rud{};
        cin >> rud;
        int r = stoi(rud, nullptr, 2);
        vector<Medicine> meds(m);
        for (int i = 0; i < m; i++)
        {
            Medicine med;
            int d{};
            string a{};
            string b{};
            cin >> d >> a >> b;
            med.days = d;
            med.cures = stoi(a, nullptr, 2);
            med.infects = stoi(b, nullptr, 2);
            meds.at(i) = med;
        }
        vector<vector<pair<int, int>>> g(pow(2, n), vector<pair<int, int>>());
        for (int i = 0; i < pow(2, n); i++)
        {
            for (auto med : meds)
            {
                int f = i;
                f &= ~med.cures;
                f |= med.infects;
                g.at(i).push_back(make_pair(f, med.days));
            }
        }
        priority_queue<pair<int, int>> q{};
        vector<int> distance(pow(2, n), INT_MAX);
        vector<bool> visited(pow(2, n), false);
        distance.at(r) = 0;
        q.push(make_pair(0, r));
        while (!q.empty())
        {
            int a = q.top().second;
            q.pop();
            if (visited.at(a))
                continue;
            visited.at(a) = true;
            for (auto u : g.at(a))
            {
                int b = u.first;
                int w = u.second;
                if (distance.at(a) + w < distance.at(b))
                {
                    distance.at(b) = distance.at(a) + w;
                    q.push(make_pair(-distance.at(b), b));
                }
            }
        }
        if (distance.at(0) == INT_MAX)
            cout << -1 << "\n";
        else
            cout << distance.at(0) << "\n";
    }
}
