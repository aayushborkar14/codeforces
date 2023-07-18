#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    int t{},n{};
    string str{};
    cin >> t;
    while (t--) {
        cin >> n;
        cin >> str;
        set<string> a{};
        for (int i=0;i<n-1;i++) {
            a.insert(str.substr(i,2));
        }
        cout << a.size() << "\n";
    }
}
