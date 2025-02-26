#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    vector<int> A(n);
    vector<int> B(n);

    vector<int> C(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }
    C = B;

    C.insert(C.begin() + n, A.begin(), A.end());

    for (int v : C)
    {
        cout << v << " ";
    }

    return 0;
}

// DONE
// Accepted