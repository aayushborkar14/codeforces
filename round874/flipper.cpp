#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{}, n{}, temp{};
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> p{};
        int r = 1;
        int li{};
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            p.push_back(temp);
            if (i <= 0)
                continue;
            if (p.at(i) > p.at(r))
                r = i;
        }
        if (r == n - 1)
        {
            if (p.at(n - 2) < p.at(0))
                r = n;
        }
        for (int i = r; i < n; i++)
            cout << p.at(i) << " ";
        cout << p.at(r - 1) << " ";
        if (r >= 2)
        {
            for (int i = r - 2; i >= 0; i--)
            {
                if (p.at(i) > p.at(0))
                    cout << p.at(i) << " ";
                else
                {
                    li = i;
                    break;
                }
            }
            for (int i = 0; i <= li; i++)
                cout << p.at(i) << " ";
        }
        cout << "\n";
    }
}
