#include <iostream>
#include <vector>
#include <string>

using namespace std;

string sxor(string a, string b)
{
    string ans{};
    for (int i = 0; i < a.size(); i++)
        ans += (a.at(i) - '0') ^ (b.at(i) - '0') + '0';
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    while (t--)
    {
        int n{};
        string s{};
        cin >> n >> s;
        int mismatch_pair{};
        for (int i = 0; i < n / 2; i++)
            if (s.at(i) != s.at(n - i - 1))
                mismatch_pair++;
        int match_pair = (n / 2) - mismatch_pair;
        int left_over = n - (mismatch_pair + match_pair) * 2;
        for (int i = 0; i <= n; i++)
            if (i < mismatch_pair)
                cout << 0;
            else
            {
                if ((i - mismatch_pair) % 2 == 0)
                {
                    if ((i - mismatch_pair) / 2 <= match_pair)
                        cout << 1;
                    else
                        cout << 0;
                }
                else
                {
                    if (left_over == 1 && (i - mismatch_pair - left_over) / 2 <= match_pair)
                        cout << 1;
                    else
                        cout << 0;
                }
            }
        cout << "\n";
    }
}
