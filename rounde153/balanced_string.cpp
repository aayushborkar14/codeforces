#include <iostream>
#include <string>
#include <cmath>
#include <utility>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s{};
    cin >> s;
    int n = s.size();
    vector<pair<int, int>> dp;
    if (s.at(0) == '0')
        dp.push_back(make_pair(1, 0));
}
