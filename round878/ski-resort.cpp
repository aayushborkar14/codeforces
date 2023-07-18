#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    int n{}, k{}, q{};
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> q;
        bool w = false;
        vector<long long int> windows{};
        long long int temp{};
        long long int win_size{};
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (temp <= q && !w && i == n - 1)
                windows.push_back(1);
            else if (temp <= q && !w)
            {
                w = true;
                win_size++;
            }
            else if (temp <= q && i == n - 1 && w)
                windows.push_back(++win_size);
            else if (temp <= q && w)
                win_size++;
            else if (temp > q && w)
            {
                windows.push_back(win_size);
                w = false;
                win_size = 0;
            }
        }
        long long int count{};
        for (auto l : windows)
        {
            if (l >= k)
                count += (l - k + 1) * (l + 1) - ((l * (l + 1) / 2) - (k * (k - 1)) / 2);
        }
        cout << count << "\n";
    }
}
