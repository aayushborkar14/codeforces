#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    int t{}, n{}, k{};
    cin >> t;
    while (t--)
    {
        vector<int> a{}, a2{};
        vector<int> b{}, b2{};
        map<int, int> m;
        cin >> n >> k;
        int temp{};
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            a.push_back(temp);
            a2.push_back(temp);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            b.push_back(temp);
            b2.push_back(temp);
        }
        sort(a2.begin(), a2.end());
        sort(b2.begin(), b2.end());
    }
}
