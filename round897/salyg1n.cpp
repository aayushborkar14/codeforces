#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    while (t--)
    {
        int n{};
        cin >> n;
        vector<int> s(n, 0);
        for (int i = 0; i < n; i++)
            cin >> s.at(i);
        int moves_left = 2 * n + 1;
    }
}
