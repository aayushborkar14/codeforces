#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int max_idx(vector<int> a)
{
    int max_idx{};
    for (int i = 0; i < a.size(); i++)
        if (a.at(i) > a.at(max_idx))
            max_idx = i;
    return max_idx;
}

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
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++)
            cin >> a.at(i);
        while (true)
        {
        }
    }
}
