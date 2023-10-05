#include <iostream>
#include <vector>
#include <climits>
#include <numeric>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    while (t--)
    {
        int n{}, m{}, k{};
        cin >> n >> m >> k;
        vector<int> a(n, 0);
        vector<int> b(m, 0);
        int mina = INT_MAX, minb = INT_MAX, maxa = 0, maxb = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a.at(i);
            if (a.at(i) > maxa)
                maxa = a.at(i);
            if (a.at(i) < mina)
                mina = a.at(i);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b.at(i);
            if (b.at(i) > maxb)
                maxb = b.at(i);
            if (b.at(i) < minb)
                minb = b.at(i);
        }
        int maxx = max(maxa, maxb);
        int minn = min(mina, minb);
        // first_round
        long long ans = 0;
        for (long long el : a)
            ans += el;
        if (maxb > mina)
            ans += maxb - mina;
        if (k % 2 == 1)
        {
            cout << ans << '\n';
            continue;
        }
        // second_round
        ans += minn - maxx;
        cout << ans << '\n';
    }
}
