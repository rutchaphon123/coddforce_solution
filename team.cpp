#include <iostream>

int main()
{
    int n{}, Petya{}, Vasya{}, Tonya{};
    int total{0};
    std::cin >> n;
    while (n--)
    {
        std::cin >> Petya >> Vasya >> Tonya;
        if (Petya + Vasya + Tonya >= 2)
        {
            total += 1;
        }
    }
    std::cout << total << "\n";
    return 0;
}