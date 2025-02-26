#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int m = 0;
        int e = 0;
        int c = 1;
        sort(ar.begin(), ar.end());

        for (int i = 0; i < n; i++)
        {
            if (ar[i] == c)
            {
                c++;
            }
            else if( ar[i] < c)
            {
                e++;
            }
            else
            {
                m++;
            }
        }
        // cout << m << " " << c << endl;
        if(m == 0)
        {
            cout << "YES"
                 << "\n";
        }
        else if (m <= k + e)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }

    return 0;
}


//-----------------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k; // 4 2
        int a[n + 1];  //
        bool flag = true;
        int cnt = 0;
        for (int i = 1; i <= n; i++)
            a[i] = 0;

        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            if (x <= n)
            {
                if (a[x] != 0)
                {
                    flag = false;
                }
                else
                {
                    a[x] = x;
                }
            }
            else
            {
                cnt++;
            }
        }

        if (cnt > k)
            flag = false;

        if (flag)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }

    return 0;
}

//----------------------------

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        int cnt = 0;
        int barti = n - (s.size());
        for (auto val : s)
        {
            if (val > n)
            {
                cnt++;
            }
        }
        barti += cnt;
        if (k >= barti)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

//------------------------------

