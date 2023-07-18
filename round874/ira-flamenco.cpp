#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{}, n{}, m{};
    cin >> t;
    const int mod = 1000000007;
    while (t--)
    {
        cin >> n >> m;
        map<int, int> a{};
        vector<int> vec{};
        int temp{};
        int vs{};
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            a[temp]++;
            if (a.at(temp) <= 1)
            {
                vec.push_back(temp);
                vs++;
            }
        }
        sort(vec.begin(), vec.end());
        long long int count{};
        for (int i = 0; i < vs - m + 1; i++)
        {
            if (vec.at(i + m - 1) == vec.at(i) + m - 1)
            {
                int cnt = 1;
                for (int j = i; j < i + m; j++)
                    cnt = (cnt * (a.at(vec.at(j)) % mod)) % mod;
                count += cnt;
                count = count % mod;
            }
        }
        cout << count << "\n";
    }
}
