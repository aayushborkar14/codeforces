#include <iostream>
#include <vector>
#include <string>

using namespace std;

int isSubstring(string s1, string s2)
{
    // using find method to check if s1 is
    // a substring of s2
    if (s2.find(s1) != string::npos)
        return s2.find(s1);
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    while (t--)
    {
        int n{}, m{};
        string x{}, s{};
        cin >> n >> m >> x >> s;
        int ans{};
        while (true)
        {
            if (isSubstring(s, x) != -1)
                break;
            if (x.size() > 2 * s.size() && ans > 1)
            {
                ans = -1;
                break;
            }
            x += x;
            ans++;
        }
        cout << ans << '\n';
    }
}
