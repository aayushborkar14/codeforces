#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{}, n{};
    string s{};
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        char c = s.at(0);
        string a{};
        bool cont = true;
        for (int i = 0; i < n; i++)
        {
            if (cont)
            {
                cont = false;
                continue;
            }
            if (s.at(i) == c)
            {
                a += c;
                if (i < n - 1)
                    c = s.at(i + 1);
                cont = true;
            }
        }
        cout << a << "\n";
    }
}
