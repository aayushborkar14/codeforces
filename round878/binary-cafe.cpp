#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

string dectobin(int a)
{
    if (a == 0)
        return "0";
    int c = a;
    string sr{}, s{};
    while (true)
    {
        if (c == 1)
        {
            sr.append(1, '1');
            break;
        }
        if (c % 2 == 0)
        {
            sr.append(1, '0');
            c /= 2;
        }
        else
        {
            sr.append(1, '1');
            c = (c - 1) / 2;
        }
    }
    for (int i = sr.size() - 1; i >= 0; i--)
        s.append(1, sr.at(i));
    return s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    int t{};
    int n{}, k{};
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        long long int m{};
        bool mgn = false;
        for (int i = 0; i < k; i++)
        {
            m += pow(2, i);
            if (m > n)
            {
                mgn = true;
                break;
            }
        }
        if (!mgn)
        {
            cout << setprecision(0) << pow(2, k) << "\n";
        }
        else
        {
            cout << setprecision(0) << n + 1 << "\n";
        }
    }
}
