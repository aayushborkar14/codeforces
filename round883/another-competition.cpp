#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    while (t--)
    {
        int n{}, m{}, h{};
        cin >> n >> m >> h;
        vector<int> points(n, 0);
        vector<long long> penalty(n, 0);
        for (int i = 0; i < n; i++)
        {
            vector<int> times(m);
            for (int j = 0; j < m; j++)
                cin >> times.at(j);
            sort(times.begin(), times.end());
            long long cum_time{};
            for (auto time : times)
            {
                cum_time += time;
                if (cum_time > h)
                    break;
                points.at(i)++;
                penalty.at(i) += cum_time;
            }
        }
        int rpoints = points.at(0);
        int rpossim{};
        int rlike{};
        for (int i = 0; i < n; i++)
            if (points.at(i) == rpoints)
            {
                rlike++;
                if (penalty.at(i) < penalty.at(0))
                    rpossim++;
            }
        sort(points.begin(), points.end());
        auto lower = lower_bound(points.begin(), points.end(), rpoints);
        int idx = distance(points.begin(), lower);
        cout << n - idx - rlike + rpossim + 1 << "\n";
    }
}
