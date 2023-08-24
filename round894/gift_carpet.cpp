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
        int n{}, m{};
        cin >> n >> m;
        vector<string> carpet(n);
        for (int i = 0; i < n; i++)
            cin >> carpet.at(i);
        vector<char> desired_chars = {'v', 'i', 'k', 'a'};
        int col_idx{};
        bool char_found = false;
        bool ans = false;
        for (int i = 0; i < 4; i++)
        {
            while (true)
            {
                if (m - (4 - i) < col_idx)
                    break;
                for (int j = 0; j < n; j++)
                {
                    string s = carpet.at(j);
                    if (s.at(col_idx) == desired_chars.at(i))
                    {
                        char_found = true;
                        break;
                    }
                }
                if (char_found)
                    break;
                else
                    col_idx++;
            }
            if (char_found)
            {
                col_idx++;
                char_found = false;
                if (i == 3)
                    ans = true;
            }
            else
                break;
        }
        if (ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
