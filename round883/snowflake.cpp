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
    vector<int> poss{};
    for (int i = 2; i < 1000000; i++)
    {
        long long k = i;
        long long s = 1 + i;
        while (true)
        {
            k *= i;
            s += k;
            if (s > 1000000)
                break;
            poss.push_back(s);
        }
    }
    sort(poss.begin(), poss.end());
    while (t--)
    {
        int n{};
        cin >> n;
        if (binary_search(poss.begin(), poss.end(), n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
