// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     // vector<int> n;
//     // vector<int> n(5);
//     // vector<int> n(5, 10);
//     vector<int> n2(5, 100);
//     vector<int> n(n2);


//     for (int i = 0; i < n.size(); i++)
//     {
//         cout << n[i] << " ";
//     }
//     cout << endl;

//     cout << n.size() << endl;


//     return 0;
// }

//------------------------


#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int ar[6] = {1, 2, 3, 4, 5, 6};
    vector<int> n(ar, ar+6);

    // vector<int> n = {10, 20, 30, 40, 50};

    cout << "Size - " << n.size() << endl;

    for (int i = 0; i < n.size(); i++)
    {
        cout << n[i] << " ";
    }
    cout << endl;



    return 0;
}
