#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    while (t--)
    {
        string s{};
        int pos{};
        cin >> s >> pos;
        stack<pair<char, int>> sta{};
        int n = s.size();
        long long k = 1;
        for (k = 1; k < n; k++)
            if (k * (2 * n - k + 1) / 2.0 >= pos)
                break;
        long long len = n - k + 1;
        int to_remove = n - len;
        long long idx = pos - ((k - 1) * (2 * n - k + 2) / 2) - 1;
        vector<int> remove_seq{};
        s += 'a' - 1;
        n++;
        for (int i = 0; i < n; i++)
        {
            if (remove_seq.size() >= to_remove)
                break;
            if (!sta.size())
                sta.push(make_pair(s.at(i), i));
            else if (sta.top().first <= s.at(i))
                sta.push(make_pair(s.at(i), i));
            else if (sta.top().first > s.at(i))
            {
                while (sta.top().first > s.at(i))
                {
                    remove_seq.push_back(sta.top().second);
                    if (remove_seq.size() >= to_remove)
                        break;
                    sta.pop();
                    if (!sta.size())
                        break;
                }
                sta.push(make_pair(s.at(i), i));
            }
        }
        sort(remove_seq.begin(), remove_seq.end());
        string t{};
        int rem_seq_idx = 0;
        for (int i = 0; i < n; i++)
        {
            if (rem_seq_idx < remove_seq.size())
            {
                if (i == remove_seq.at(rem_seq_idx))
                    rem_seq_idx++;
                else
                    t += s.at(i);
            }
            else
                t += s.at(i);
        }
        cout << t.at(idx);
    }
}
