#include <bits/stdc++.h>
using namespace std;

void print_normal(list<int> My_List)
{
    cout << "L -> ";
    for (int val : My_List)
    {
        cout << val << " ";
    }
    cout << endl;
}
void print_reverse(list<int> My_List)
{
    My_List.reverse();
    cout << "R -> ";
    for (int val : My_List)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    list<int> My_List;
    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            My_List.push_front(v);
            print_normal(My_List);
            print_reverse(My_List);
        }
        else if (x == 1)
        {
            My_List.push_back(v);
            print_normal(My_List);
            print_reverse(My_List);
        }
        else if (x == 2)
        {
            if (v < My_List.size())
            {
                My_List.erase(next(My_List.begin(), v));
                print_normal(My_List);
                print_reverse(My_List);
            }
            else
            {
                print_normal(My_List);
                print_reverse(My_List);
            }
        }
    }

    return 0;
}

// DONE
// Accepted