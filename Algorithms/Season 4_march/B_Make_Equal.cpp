#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t-- )
    {
        int n;
        cin >> n;
        vector<int> ar(n);
        int sum = 0;
        for (int i = 0; i < ar.size(); i++)
        {
            sum += ar[i];
        }
        



        int k = (sum / n), carry = 0;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] > k)
            {
                carry += (ar[i] - k);
                ar[i] = k;
            }
            else
            {
                int need = (k - ar[i]);
                if (carry >= need)
                {
                    ar[i] = k;
                    carry -= need;
                }
            }
        }
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if(ar[i] != k)
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }
    


    return 0;
}
