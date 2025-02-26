// #include <iostream>
// #include <string>
// using namespace std;

// char getFinalColor(char color1, char color2)
// {
//     if ((color1 == 'R' && color2 == 'G') || (color1 == 'G' && color2 == 'R'))
//     {
//         return 'B';
//     }
//     else if ((color1 == 'R' && color2 == 'B') || (color1 == 'B' && color2 == 'R'))
//     {
//         return 'G';
//     }
//     else if ((color1 == 'G' && color2 == 'B') || (color1 == 'B' && color2 == 'G'))
//     {
//         return 'R';
//     }
//     else
//     {
//         return color1; // Colors vanish each other
//     }
// }

// int main()
// {
//     int t; // Number of test cases
//     cin >> t;

//     while (t--)
//     {
//         int n; // Number of colors in the box
//         cin >> n;

//         string colors;
//         cin >> colors;

//         // Iterate through adjacent colors and determine the final colors
//         for (int i = 1; i < n; ++i)
//         {
//             colors[i] = getFinalColor(colors[i - 1], colors[i]);
//         }

//         cout << colors[n - 1] << endl; // Output the final color
//     }

//     return 0;
// }

// /-------------------

#include <iostream>
#include <vector>

char mixColors(char color1, char color2)
{
    if ((color1 == 'R' && color2 == 'B') || (color1 == 'B' && color2 == 'R'))
        return 'P';
    else if ((color1 == 'R' && color2 == 'G') || (color1 == 'G' && color2 == 'R'))
        return 'Y';
    else if ((color1 == 'B' && color2 == 'G') || (color1 == 'G' && color2 == 'B'))
        return 'C';
    else
        return color1; // Colors of the same type vanish each other
}

int main()
{
    int T;
    std::cin >> T;

    while (T--)
    {
        int N;
        std::cin >> N;

        std::vector<char> colors(N);
        for (int i = 0; i < N; ++i)
        {
            std::cin >> colors[i];
        }

        // Simulate mixing colors
        std::vector<char> finalColors;
        for (int i = 0; i < N; ++i)
        {
            if (!finalColors.empty() && finalColors.back() != colors[i])
            {
                char mixedColor = mixColors(finalColors.back(), colors[i]);
                if (mixedColor != finalColors.back())
                {
                    finalColors.pop_back(); // Vanish the previous color
                }
                finalColors.push_back(mixedColor);
            }
            else
            {
                finalColors.push_back(colors[i]);
            }
        }

        // Output the final colors
        for (char color : finalColors)
        {
            std::cout << color;
        }
        std::cout << std::endl;
    }

    return 0;
}
