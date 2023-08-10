#include <iostream>
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
        string s{};
        cin >> s;
        while (true)
        {
            bool found = false;
            for (int i = 0; i < s.size(); i++)
            {
                if (s.at(i) >= '5')
                {
                    found = true;
                    if (i == 0)
                    {
                        int s_size = s.size();
                        s = "1";
                        for (int j = 0; j < s_size; j++)
                            s.append("0");
                    }
                    else
                    {
                        s.at(i - 1)++;
                        for (int j = i; j < s.size(); j++)
                            s.at(j) = '0';
                    }
                    break;
                }
            }
            if (!found)
                break;
        }
        cout << s << "\n";
    }
}
