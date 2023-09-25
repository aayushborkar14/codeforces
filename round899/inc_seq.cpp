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
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++)
            cin >> a.at(i);
        vector<int> b(n, 1);
        if (a.at(0) == 1)
            b.at(0)++;
        for (int i = 1; i < n; i++)
        {
            b.at(i) = b.at(i - 1) + 1;
            while (b.at(i) == a.at(i))
                b.at(i)++;
        }
        cout << b.at(n - 1) << '\n';
    }
}
