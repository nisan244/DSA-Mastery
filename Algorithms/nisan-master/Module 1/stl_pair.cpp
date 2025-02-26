#include <bits/stdc++.h>
using namespace std;
// class Pair{
//     public:
//         int first,second;
//         void make_pair(int a, int b){
//             first = a;
//             second = b;
//         }
// };
int main(int argc, char const *argv[])
{
    // Pair p;
    // p.make_pair(10,20);
    // cout << p.first << " " << p.second << endl;

    pair<string, int> p;
    p = make_pair("Nisan", 20);
    cout << p.first << " " << p.second << endl;

    
    return 0;
}