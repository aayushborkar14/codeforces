#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    while (t--)
    {
        int m{}, k{}, a1{}, ak{};
        cin >> m >> k >> a1 >> ak;
        int ok{}, o1{};
        ok = m / k;
        o1 = m - ok * k;
        int fk{}, f1{};
        if (ok > ak)
            fk = ok - ak;
        if (o1 > a1)
            f1 = o1 - a1;
        if (o1 < a1 && fk > 0)
        {
            int reg1 = a1 - o1;
            if (fk * k <= reg1)
            {
                fk = 0;
                ok = ak;
                o1 = m - ok * k;
                if (o1 > a1)
                    f1 = o1 - a1;
            }
            else
            {
                ok -= (reg1 / k);
                fk = ok - ak;
                o1 = m - ok * k;
                if (o1 > a1)
                    f1 = o1 - a1;
            }
        }
        cout << f1 + fk << "\n";
    }
}
