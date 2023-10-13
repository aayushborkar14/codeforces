#include <iostream>
#include <vector>
#include <string>

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
        vector<vector<char>> mat(n, vector<char>(n, 0));
        for (int i = 0; i < n; i++)
        {
            string s{};
            cin >> s;
            for (int j = 0; j < n; j++)
                mat.at(i).at(j) = s.at(j);
        }
        long long ans{};
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = 0; j < n - 2 * i - 1; j++)
            {
                char a = mat.at(i).at(i + j);
                char b = mat.at(i + j).at(n - i - 1);
                char c = mat.at(n - i - j - 1).at(i);
                char d = mat.at(n - i - 1).at(n - i - j - 1);
                char maxc = max(max(a, b), max(c, d));
                ans += (maxc - a) + (maxc - b) + (maxc - c) + (maxc - d);
            }
        }
        cout << ans << "\n";
    }
}
