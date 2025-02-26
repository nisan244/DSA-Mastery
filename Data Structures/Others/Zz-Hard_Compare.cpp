#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;

    // double result_A = b * log(a);
    // double result_B = d * log(c);

    double result_A = pow(log(a), b);
    double result_B = pow(log(c), d);

    // if(b * log(a) > d * log(c))
    if(result_A > result_B)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }


    return 0;
}

// #include <iostream>
// #include <cmath>

// int main()
// {
//     long long int base_A, exponent_A, base_B, exponent_B;
//     std::cin >> base_A >> exponent_A >> base_B >> exponent_B;

//     double result_A = exponent_A * log(base_A);
//     double result_B = exponent_B * log(base_B);

//     if (result_A > result_B)
//     {
//         std::cout << "YES" << std::endl;
//     }
//     else
//     {
//         std::cout << "NO" << std::endl;
//     }

//     return 0;
// }
