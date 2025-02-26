// 6-1 Reference of a Pointer

#include <bits/stdc++.h>
using namespace std;

void fun(int * &p)
{
    // *p = 20;
    // p = NULL;
    cout << &p << endl;
}

int main(int argc, char const *argv[])
{
    int val = 10;
    int *ptr = &val;

    fun(ptr);

    // cout << val << endl;
    cout << &ptr << endl;

    return 0;
}
