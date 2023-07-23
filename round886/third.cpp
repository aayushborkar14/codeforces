#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    int n{}, m{};
    while (t--)
    {
        cin >> n >> m;
        vector<vector<int>> dist(n, vector<int>(n, INT_MAX));
        int a{}, b{}, d{};
        for (int i = 0; i < m; i++)
        {
            cin >> a >> b >> d;
            if (dist.at(a).at(b) == INT_MAX)
            {
                dist.at(a).at(b) = d;
                dist.at(b).at(a) = -d;
            }
        }
    }
}
