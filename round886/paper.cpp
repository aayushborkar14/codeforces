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
        int in = -1;
        string word{};
        string temp{};
        for (int i = 0; i < 8; i++)
        {
            cin >> temp;
            bool br = false;
            if (in == -1)
            {
                for (int j = 0; j < 8; j++)
                    if (temp.at(j) != '.')
                    {
                        in = j;
                        word += temp.at(j);
                        break;
                    }
            }
            else if (temp.at(in) != '.')
                word += temp.at(in);
        }
        cout << word << "\n";
    }
}
