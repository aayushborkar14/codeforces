#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    while (t--)
    {
        int n{}, m{}, k{}, ans{};
        cin >> n >> m >> k;
        for (int i = 0; i <= m; i++)
        {
            set<int> s{};
            int preva = i;
            s.insert(i);
            for (int j = n; j >= 1; j--)
            {
                int a = preva % j;
                s.insert(a);
                preva = a;
            }
            if (s.size() == k)
                ans++;
        }
        cout << ans << '\n';
    }
}
