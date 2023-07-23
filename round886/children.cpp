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
        int a{};
        vector<int> step_rep_count(n + 1, 0);
        vector<int> frog_count(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a <= n)
                step_rep_count.at(a)++;
        }
        for (int i = 1; i <= n; i++)
            if (step_rep_count.at(i))
                for (int j = i; j <= n; j += i)
                    frog_count.at(j) += step_rep_count.at(i);
        int max{};
        for (auto cnt : frog_count)
        {
            if (cnt > max)
                max = cnt;
        }
        cout << max << "\n";
    }
}
