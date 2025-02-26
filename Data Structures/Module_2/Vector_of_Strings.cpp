// 2-7 Vector of Strings

// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     vector<string> x(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> x[i];
//     }

//     for(string val : x)
//     {
//         cout << val << endl;
//     }

//     return 0;
// }

//------------------------

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cin.ignore();
    vector<string> x(n);

    for (int i = 0; i < n; i++)
    {

        getline(cin, x[i]);
    }

    for (string val : x)
    {
        cout << val << endl;
    }

    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     vector<int> v={1,2,3,4};
//     v.resize(2);
//     v.resize(4);

//     for(int x : v)
//     {
//         cout << x << " ";
//     }


//     return 0;
// }
