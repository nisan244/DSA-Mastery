#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int x = 1;

    for (int i = 1; i <= n * 2 - 1; i++)
    {
        for (int j = 1; j <= n * 2 - 1; j++)
        {
            if (i + j == n * 2)
            {
                cout << x;
            }
            else if (i == j)
            {
                cout << x;
            }
            else
            {
                cout << " ";
            }
        }
        x++;
        if (x > 2)
        {
            x = 0;
        }
        cout << "\n";
    }

    return 0;
}

// DONE
// Accepted

// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << "Bolte hobe " << i << endl;
//     }

//     return 0;
// }
