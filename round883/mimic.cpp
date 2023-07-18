#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t{};
    cin >> t;
    while (t--)
    {
        int n{};
        cin >> n;
        vector<int> count(10, 0);
        int temp{};
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            count.at(temp)++;
        }
        vector<int> count2(10, 0);
        vector<int> seq(n);
        vector<vector<int>> idxs(10, vector<int>());
        do
        {
            count2.assign(10, 0);
            idxs.assign(10, vector<int>());
            cout << "- " << 0 << endl;
            cout.flush();
            for (int i = 0; i < n; i++)
            {
                cin >> temp;
                seq.at(i) = temp;
                count2.at(temp)++;
                idxs.at(temp).push_back(i);
            }
        } while (count == count2);
        int mim{};
        for (int i = 1; i <= 9; i++)
            if (count2.at(i) > count.at(i))
            {
                mim = i;
                break;
            }
        if (count2.at(mim) == 1)
        {
            cout << "! " << idxs.at(mim).at(0) + 1 << endl;
            cout.flush();
        }
        else
        {
            int ndash = count2.at(mim);
            cout << "- " << n - count2.at(mim);
            for (int i = 1; i <= 9; i++)
            {
                if (i == mim)
                    continue;
                for (auto idx : idxs.at(i))
                    cout << " " << idx + 1;
            }
            cout << endl;
            cout.flush();
            count.assign(10, 0);
            count.at(mim) = count2.at(mim);
            seq.resize(ndash, 0);
            bool first = true;
            do
            {
                count2.assign(10, 0);
                idxs.assign(10, vector<int>());
                if (!first)
                {
                    cout << "- " << 0 << endl;
                    cout.flush();
                }
                else
                    first = false;
                for (int i = 0; i < ndash; i++)
                {
                    cin >> temp;
                    count2.at(temp)++;
                    seq.at(i) = temp;
                    idxs.at(temp).push_back(i);
                }
            } while (count == count2);
            for (int i = 1; i <= 9; i++)
                if (count2.at(i) > count.at(i))
                {
                    mim = i;
                    break;
                }
            cout << "! " << idxs.at(mim).at(0) + 1 << endl;
            cout.flush();
        }
    }
}
