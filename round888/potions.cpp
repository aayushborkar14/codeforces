#include <iostream>
#include <vector>

using namespace std;

vector<long long> vec;
vector<bool> visited;
vector<vector<int>> mix;
long long dp(int i)
{
    if (visited.at(i))
        return vec.at(i);
    visited.at(i) = true;
    if (mix.at(i).size() > 0)
    {
        long long mix_cost{};
        bool overflow = false;
        for (auto c : mix.at(i))
        {
            if (mix_cost + dp(c) >= mix_cost)
            {
                mix_cost += dp(c);
                continue;
            }
            overflow = true;
            break;
        }
        if (mix_cost < vec.at(i) && !overflow)
            vec.at(i) = mix_cost;
    }
    return vec.at(i);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    while (t--)
    {
        vec.clear();
        visited.clear();
        mix.clear();
        int n{}, k{};
        cin >> n >> k;
        vec.resize(n, 0);
        visited.resize(n, false);
        mix.resize(n, vector<int>());
        for (int i = 0; i < n; i++)
            cin >> vec.at(i);
        int temp{};
        for (int i = 0; i < k; i++)
        {
            cin >> temp;
            temp--;
            vec.at(temp) = 0;
            visited.at(temp) = true;
        }
        for (int i = 0; i < n; i++)
        {
            int size{};
            cin >> size;
            while (size--)
            {
                cin >> temp;
                mix.at(i).push_back(temp - 1);
            }
        }
        for (int i = 0; i < n; i++)
            cout << dp(i) << " ";
        cout << "\n";
    }
}
