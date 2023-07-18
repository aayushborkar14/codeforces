#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    while (t--)
    {
        vector<vector<char>> g(3, vector<char>(3));
        bool draw = true;
        char win{};
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cin >> g.at(i).at(j);
        for (int i = 0; i < 3; i++)
        {
            if (g.at(i).at(0) == g.at(i).at(1) && g.at(i).at(1) == g.at(i).at(2) && g.at(i).at(1) != '.')
            {
                draw = false;
                win = g.at(i).at(1);
            }
            else if (g.at(0).at(i) == g.at(1).at(i) && g.at(1).at(i) == g.at(2).at(i) && g.at(1).at(i) != '.')
            {
                draw = false;
                win = g.at(1).at(i);
            }
        }
        if (draw)
        {
            if (g.at(0).at(0) == g.at(1).at(1) && g.at(1).at(1) == g.at(2).at(2) && g.at(1).at(1) != '.')
            {
                draw = false;
                win = g.at(1).at(1);
            }
            else if (g.at(0).at(2) == g.at(1).at(1) && g.at(1).at(1) == g.at(2).at(0) && g.at(1).at(1) != '.')
            {
                draw = false;
                win = g.at(1).at(1);
            }
        }
        if (draw)
            cout << "DRAW\n";
        else
            cout << win << "\n";
    }
}
