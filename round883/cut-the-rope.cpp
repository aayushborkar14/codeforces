#include <iostream>

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
        int a{}, b{};
        int ans{};
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            if (a > b)
                ans++;
        }
        cout << ans << "\n";
    }
}
