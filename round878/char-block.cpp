#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T{}, t{}, q{};
    cin >> T;
    while (T--)
    {
        string s1{}, s2{};
        cin >> s1 >> s2 >> t >> q;
        deque<int> blocked{};
        deque<int> block_till{};
        int a{};
        while (q--)
        {
            if (block_till.front() > q)
            {
                blocked.pop_front();
                block_till.pop_front();
            }
            cin >> a;
            switch (a)
            {
            case 1:
            {
                int b1{};
                cin >> b1;
                blocked.push_back(b1 - 1);
                block_till.push_back(q - t + 1);
                break;
            }
            case 2:
            {
                int b{}, c{}, d{}, e{};
                cin >> b >> c >> d >> e;
                if (b == 1 && d == 1)
                {
                    char a1 = s1.at(e - 1);
                    s1.at(e - 1) = s1.at(c - 1);
                    s1.at(c - 1) = a1;
                }
                else if (b == 2 && d == 1)
                {
                    char a1 = s1.at(e - 1);
                    s1.at(e - 1) = s2.at(c - 1);
                    s2.at(c - 1) = a1;
                }
                else if (b == 1 && d == 2)
                {
                    char a1 = s2.at(e - 1);
                    s2.at(e - 1) = s1.at(c - 1);
                    s1.at(c - 1) = a1;
                }
                else if (b == 2 && d == 2)
                {
                    char a1 = s2.at(e - 1);
                    s2.at(e - 1) = s2.at(c - 1);
                    s2.at(c - 1) = a1;
                }
                break;
            }
            case 3:
            {
                int eq = true;
                for (int i = 0; i < s1.size(); i++)
                {
                    bool cont = false;
                    for (auto it = blocked.cbegin(); it != blocked.cend(); it++)
                        if (*it == i)
                        {
                            cont = true;
                            break;
                        }
                    if (cont)
                        continue;
                    if (s1.at(i) != s2.at(i))
                    {
                        eq = false;
                        break;
                    }
                }
                if (eq)
                    cout << "YES"
                         << "\n";
                else
                    cout << "NO"
                         << "\n";
                break;
            }
            default:
                break;
            }
        }
    }
}
