#include <iostream>
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
        int n{}, k{};
        cin >> n >> k;
        int count{};
        for (int j = 0; j <= ceil(n / 2.0); j++)
        {
            int a0 = n;
            int a1 = floor(n / 2.0) + j;
            int a2 = a0 - a1;
            bool flag = false;
            if (a0 < a1 || a1 < a2 || a0 < 0 || a1 < 0 || a2 < 0)
                continue;
            for (int i = 3; i < k; i++)
            {
                a0 = a1;
                a1 = a2;
                a2 = a0 - a1;
                if (a0 < a1 || a1 < a2 || a0 < 0 || a1 < 0 || a2 < 0)
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
                continue;
            else
                count++;
        }
        cout << count << "\n";
    }
}
