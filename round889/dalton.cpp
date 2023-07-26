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
        int n{};
        cin >> n;
        int num_same{};
        int temp{};
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (temp == i + 1)
                num_same++;
        }
        cout << (num_same + 1) / 2 << "\n";
    }
}
