#include <iostream>
#include <time.h>

int main()
{
    srand(time(NULL));
    const int MAX = 9;
    int square[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            square[i][j] = rand() % MAX + 1;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << square[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}
