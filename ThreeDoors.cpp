#include <iostream>

int main()
{
    // n  = number  of case
    // key = key of the door
    // arr = for  contain array door
    // door = 3 array
    int n{}, key{}, arr{}, door[3]{};
    std::cin >> n;
    while (n--)
    {
        std::cin >> key;
        for (int i = 0; i < 3; i++)
        {
            std::cin >> arr;
            door[i] = arr;
        }
        if (door[key - 1] == 0 ||
            door[door[key - 1] - 1] == 0)
        {
            std::cout << "NO"
                      << "\n";
        }
        else
        {
            std::cout << "YES"
                      << "\n";
        }
    }

    return 0;
}
