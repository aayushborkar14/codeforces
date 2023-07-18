#include <iostream>
#include <vector>
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
        cin >> n;
        int e{}, temp{};
        vector<int> vec{};
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            vec.push_back(temp);
            if (temp % 2 == 0)
                e++;
        }
        if (e == 0 || e == n)
        {
            cout << "YES\n";
        }
        else
        {
            int small = vec.at(0);
            for (auto a : vec)
                if (a < small)
                    small = a;
            if (small % 2 == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}
