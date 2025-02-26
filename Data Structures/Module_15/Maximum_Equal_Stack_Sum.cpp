// #include <bits/stdc++.h>

// int getSum(stack<int> s)
// {
//     int sum = 0;
//     while (!s.empty())
//     {
//         sum += s.top();
//         s.pop();
//     }
//     return sum;
// }

// int maxSum(stack<int> &s1, stack<int> &s2, stack<int> &s3)
// {
//     // Write your code here

//     int sum1 = getSum(s1);
//     int sum2 = getSum(s2);
//     int sum3 = getSum(s3);

//     while (true)
//     {
//         if (sum1 == sum2 && sum2 == sum3)
//             break;
//         if (sum1 >= sum2 && sum1 >= sum3)
//         {
//             sum1 -= s1.top();
//             s1.pop();
//         }
//         else if (sum2 >= sum1 && sum2 >= sum3)
//         {
//             sum2 -= s2.top();
//             s2.pop();
//         }
//         else
//         {
//             sum3 -= s3.top();
//             s3.pop();
//         }
//     }
//     return sum1;
// }

//---------------------------------

#include <bits/stdc++.h>
using namespace std;

int getSum(stack<int> s)
{
    int sum = 0;
    while (!s.empty())
    {
        sum += s.top();
        s.pop();
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    stack<int> s1, s2, s3;

    while (true)
    {
        int x;
        cin >> x;
        s1.push(x);
        if (x == -1)
            break;
    }
    while (true)
    {
        int y;
        cin >> y;
        s2.push(y);
        if (y == -1)
            break;
    }
    while (true)
    {
        int z;
        cin >> z;
        s3.push(z);
        if (z == -1)
            break;
    }

    int sum1 = getSum(s1);
    int sum2 = getSum(s2);
    int sum3 = getSum(s3);

    while (true)
    {
        if (sum1 == sum2 && sum2 == sum3)
            break;
        if (sum1 >= sum2 && sum2 >= sum3)
        {
            sum1 -= s1.top();
            s1.pop();
        }
        else if (sum2 >= sum1 && sum2 >= sum3)
        {
            sum2 -= s2.top();
            s2.pop();
        }
        else
        {
            sum3 -= s3.top();
            s3.pop();
        }
    }

    cout << sum1 << " " << sum2 << " " << sum3 << endl;

    return 0;
}
