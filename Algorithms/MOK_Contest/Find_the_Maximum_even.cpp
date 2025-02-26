#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    vector<int> arr(n);
    int m_value = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0 && arr[i] > m_value)
        {
            m_value = arr[i];
        }
    }
    // cout << m_value << endl;
    int total;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            total = arr[i] + arr[j];
            if (total % 2 == 0 && total > m_value)
            {
                m_value = total;
            }
        }
    }
    cout << m_value << endl;

    return 0;
}


// DONE
// Accepted