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
        vector<int> a(n, 0), c(n, 0);
        for (int i = 0; i < n; i++)
            cin >> a.at(i);
        for (int i = 0; i < n; i++)
            cin >> c.at(i);
    }
}
