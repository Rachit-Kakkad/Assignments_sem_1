#include <stdio.h>
int main()
{

    int n = 5;
    printf("54th pattern :\n");
    int size = 5;
    for (int i = 1; i <= size; i++)
    {
        for (int s = 1; s <= size - i; s++)
            printf(" ");
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            if (j == 1 || j == (2 * i - 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for (int i = size - 1; i >= 1; i--)
    {
        for (int s = 1; s <= size - i; s++)
            printf(" ");
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            if (j == 1 || j == (2 * i - 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}