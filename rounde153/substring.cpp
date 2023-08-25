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
        string s{};
        cin >> s;
        int n = s.size();
        bool alter = true;
        char prev = s.at(0);
        for (int i = 1; i < n; i++)
            if (s.at(i) == prev)
            {
                alter = false;
                break;
            }
            else
                prev = s.at(i);
        if (s == "()" || n == 1)
            cout << "NO";
        else if (alter)
        {
            cout << "YES\n";
            for (int i = 0; i < n; i++)
                cout << '(';
            for (int i = 0; i < n; i++)
                cout << ')';
        }
        else
        {
            cout << "YES\n";
            for (int i = 0; i < n; i++)
                cout << "()";
        }
        cout << "\n";
    }
}
