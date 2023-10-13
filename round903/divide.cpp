#include <iostream>
#include <vector>
#include <cmath>
#include <map>

using namespace std;

// Function to check whether n is
// kth power of an integer
bool check_Kth_power(long long n, int k)
{
    // Checking for special case when k=0
    if (k == 0)
    {
        if (n == 1)
        {
            return true;
        }
        return false;
    }
    else
    {

        // Calculating reciprocal of k
        double reciprocal = (double)(1) / (double)(k);

        // The result for n^(1/k)
        double result = pow(n, reciprocal);

        // Checking condition for an integer
        if (pow(floor(result), k) == n || pow(ceil(result), k) == n)
            return true;
        return false;
    }
}

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
        long long prod{1};
        int temp{};
        map<int, int> p{};
        vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541, 547, 557, 563, 569, 571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701, 709, 719, 727, 733, 739, 743, 751, 757, 761, 769, 773, 787, 797, 809, 811, 821, 823, 827, 829, 839, 853, 857, 859, 863, 877, 881, 883, 887, 907, 911, 919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997};
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            for (auto pr : primes)
            {
                if (pr > sqrt(temp))
                    break;
                while (temp % pr == 0)
                {
                    if (p.find(pr) == p.end())
                        p.insert(make_pair(pr, 1));
                    else
                        p.at(pr)++;
                    temp /= pr;
                }
            }
            if (temp >= 2)
            {
                if (p.find(temp) == p.end())
                    p.insert(make_pair(temp, 1));
                else
                    p.at(temp)++;
            }
        }
        bool ans = true;
        for (auto par : p)
            if (par.second % n != 0)
            {
                ans = false;
                break;
            }
        if (ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
