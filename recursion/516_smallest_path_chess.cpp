#include <iostream>

int i2, j2, n, d[12][12], c[8][2] = {-2, 1, -1, 2, 1, 2, 2, 1, 2, -1, 1, -2, -1, -2, -2, -1};

void print_board()
{
    for (i2 = 2; i2 <= 9; i2++)
    {
        for (j2 = 2; j2 <= 9; j2++)
        {
            printf("%4d", d[i2][j2]);
        }
        printf("\n");
    }
    system("PAUSE");
}

int main()
{
    print_board();
}
