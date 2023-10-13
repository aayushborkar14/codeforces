#include <iostream>
#include <vector>
#include <queue>

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
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++)
            cin >> a.at(i);
        vector<vector<int>> adj(n, vector<int>());
        int ui{}, vi{};
        for (int i = 0; i < n - 1; i++)
        {
            cin >> ui >> vi;
            adj.at(ui).push_back(vi);
            adj.at(vi).push_back(ui);
        }
        
    }
}
