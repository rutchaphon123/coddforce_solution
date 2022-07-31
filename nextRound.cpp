#include <iostream>
int n{}, k{}, a{}, mas[1000]{};
int total{0};

int main()
{

    std::cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        std::cin >> a;
        mas[i] = a;
    }
    for (int j = 1; j <= n; j++)
    {
        if (mas[j] >= mas[k] && mas[j] > 0)
        {
            total += 1;
        }
    }
    std::cout << total;

    return 0;
}