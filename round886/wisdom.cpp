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
        int a{}, b{};
        int ans = -1;
        int ansq = -1;
        for (int i = 1; i <= n; i++)
        {
            cin >> a >> b;
            if (a <= 10)
            {
                if (ans == -1)
                {
                    ans = i;
                    ansq = b;
                }
                else if (b > ansq)
                {
                    ans = i;
                    ansq = b;
                }
            }
        }
        cout << ans << "\n";
    }
}
