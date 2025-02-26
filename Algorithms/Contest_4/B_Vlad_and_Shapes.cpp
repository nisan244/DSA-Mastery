#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>> n;
        vector<string> s(n);
        int arr[20][20];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            
        }
        int row = -1, col = -1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(s[i][j] == '1')
                {
                    row = i;
                    col = j;
                    break;
                }
            }
            
        }
        
    }
    

    return 0;
}
