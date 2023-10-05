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
        int a{}, b{}, n{}, temp{};
        cin >> a >> b >> n;
        long long ans = b;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            ans += min(a, temp + 1) - 1;
        }
        cout << ans << '\n';
    }
}
