#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int H, A, B;
        cin >> H >> A >> B;

        int mint = 1;
        int heit = A;

        while (heit < H)    
        {
            heit += A;
            mint++;

            if(heit >= H)
            {
                break;
            }
            heit -= B;
            // mint--;
        }
        if(mint >= H)
        {
            cout << mint << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }
    

    return 0;
}
