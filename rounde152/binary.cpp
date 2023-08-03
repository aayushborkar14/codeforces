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
        string s{};
        cin >> s;
        vector<int> lf(n, -1);
        vector<int> rg(n);
        if (s.at(0) == '0')
            lf.at(0) = 0;
        if (s.at(n - 1) == '0')
            rg.at(n - 1) = n;
        else
            rg.at(n - 1) = n - 1;
        for (int i = 1; i < n; i++)
            if (s.at(i) == '0')
                lf.at(i) = i;
            else
                lf.at(i) = lf.at(i - 1);
        for (int i = n - 2; i >= 0; i--)
            if (s.at(i) == '1')
                rg.at(i) = i;
            else
                rg.at(i) = rg.at(i + 1);
    }
}
