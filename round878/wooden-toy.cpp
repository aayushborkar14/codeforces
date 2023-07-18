#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> a;
int n{};

bool valid(int m)
{
    int x = a.at(0) - m;
    int cnt{1};
    for (int i = 1; i < n; i++)
        if (x - a.at(i) > m)
        {
            cnt++;
            x = a.at(i) - m;
        }
    if (cnt <= 3)
        return true;
    else
        return false;
}

int search(int l, int r)
{
    if (l == r)
        return l;
    if (r - l == 1)
    {
        if (valid(l))
            return l;
        else
            return r;
    }
    int mid = (l + r) >> 1;
    if (valid(mid))
        return search(l, mid);
    else
        return search(mid + 1, r);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    while (t--)
    {
        a.clear();
        cin >> n;
        a.resize(n);
        for (int i = 0; i < n; i++)
            cin >> a.at(i);
        sort(a.rbegin(), a.rend());
        cout << search(0, 1e9) << "\n";
    }
}
