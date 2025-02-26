// 13-8 STL Stack

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(10);
    st.push(40);
    st.pop();

    cout << st.top() << endl;

    return 0;
}
