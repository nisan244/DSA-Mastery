// 2-3 Vector Modifiers Functions - I

// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     vector<int> x = {10, 20, 30};
//     vector<int> y = {1, 2, 3};

//     y = x; // O(N)

//     for (int i = 0; i < y.size(); i++)
//     {
//         cout << y[i] << " ";
//     }

//     return 0;
// }

//-----------------------------

// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     vector<int> x = {10, 20, 30, 40, 50};
//     // vector<int> y = {1, 2, 3};

//     x.pop_back();
//     x.pop_back();

//     for (int i = 0; i < x.size(); i++)
//     {
//         cout << x[i] << " ";
//     }

//     return 0;
// }

///------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     vector<int> x = {10, 20, 30, 40, 50};
//     vector<int> y = {1, 2, 3, 4, 5};

//     // x.insert(x.begin()+2, 100);
//     x.insert(x.begin()+ 5, y.begin(), y.end());

//     for(int s : x)
//     {
//         cout << s << " ";
//     }

//     return 0;
// }

//-------------------------

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // vector<int> y = {10, 20, 30, 40, 50};
    vector<int> x = {1, 2, 3, 4, 5};

    // x.erase(x.begin()+3);
    // x.erase(x.begin()+1, x.begin() + 4);
    // x.erase(x.begin() + 2, x.end());
    int a =  accumulate(x.begin(), x.end(), 0ll);
    
    x.erase(x.begin(), x.end() - 2);


    cout << a << endl;

    for (int s : x)
    {
        cout << s << " ";
    }

    return 0;
}
