#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{}, n{};
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> a;
        int n_cop = n;
        int temp{}, num{};
        long long int sum{};
        bool neg_seg = false;
        for (int i = 0; i < n_cop; i++)
        {
            cin >> temp;
            if (temp == 0)
                n--;
            else
                a.push_back(temp);
        }
        for (int i = 0; i < n; i++)
        {
            if (a.at(i) > 0)
            {
                sum += a.at(i);
                if (neg_seg)
                {
                    neg_seg = false;
                    num++;
                }
            }
            else if (a.at(i) < 0)
            {
                sum += -a.at(i);
                if (!neg_seg)
                    neg_seg = true;
                if (i == n - 1)
                    num++;
            }
        }
        cout << sum << " " << num << "\n";
    }
}
