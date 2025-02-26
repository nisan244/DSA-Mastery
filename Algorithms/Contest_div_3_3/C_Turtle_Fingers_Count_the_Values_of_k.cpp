#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

// Function to calculate the number of distinct possible values of k
int distinctK(int a, int b, int l)
{
    vector<int> factors;
    // Find all prime factors of (a * b)
    int num = a * b;
    for (int i = 2; i * i <= num; ++i)
    {
        while (num % i == 0)
        {
            factors.push_back(i);
            num /= i;
        }
    }
    if (num > 1)
        factors.push_back(num);

    // Store all possible powers of prime factors that divide l
    unordered_set<int> powers;
    for (int factor : factors)
    {
        int count = 0;
        while (l % factor == 0)
        {
            l /= factor;
            ++count;
        }
        powers.insert(count);
    }

    // Calculate the number of distinct possible values of k
    int distinct = 1;
    for (int power : powers)
    {
        distinct *= (power + 1);
    }

    return distinct;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, l;
        cin >> a >> b >> l;
        cout << distinctK(a, b, l) << endl;
    }

    return 0;
}

// DONE
// Accepted