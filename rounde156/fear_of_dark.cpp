#include <iostream>
#include <vector>
#include <cmath>
#include <limits>
#include <numbers>
#include <iomanip>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t{};
    cin >> t;
    while (t--)
    {
        int px{}, py{}, ax{}, ay{}, bx{}, by{};
        cin >> px >> py >> ax >> ay >> bx >> by;
        double oa = sqrt(pow(ax, 2) + pow(ay, 2));
        double ob = sqrt(pow(bx, 2) + pow(by, 2));
        double pa = sqrt(pow(px - ax, 2) + pow(py - ay, 2));
        double pb = sqrt(pow(px - bx, 2) + pow(py - by, 2));
        double ab = sqrt(pow(ax - bx, 2) + pow(ay - by, 2));
        double ans1 = ab / 2.0;
        if (oa > ans1)
            ans1 = oa;
        if (pb > ans1)
            ans1 = pb;
        double ans2 = ab / 2.0;
        if (ob > ans2)
            ans2 = ob;
        if (pa > ans2)
            ans2 = pa;
        double ans3 = 0;
        if (oa > ans3)
            ans3 = oa;
        if (pa > ans3)
            ans3 = pa;
        double ans4 = 0;
        if (ob > ans4)
            ans4 = ob;
        if (pb > ans4)
            ans4 = pb;
        cout << setw(2) << setprecision(12) << min(min(ans1, ans2), min(ans3, ans4)) << '\n';
    }
}
