#include <stdio.h>
int main()
{

    int n = 5;

    printf("55th pattern :\n");
    int rows = 4;
    for (int i = 1; i <= rows; i++)
    {
        for (int s = 1; s <= rows - i; s++)
            printf("  ");
        for (int j = 1; j <= i; j++)
            printf("%d ", j);
        for (int j = i - 1; j >= 1; j--)
            printf("%d ", j);
        printf("\n");
    }
    for (int i = rows - 1; i >= 1; i--)
    {
        for (int s = 1; s <= rows - i; s++)
            printf("  ");
        for (int j = 1; j <= i; j++)
            printf("%d ", j);
        for (int j = i - 1; j >= 1; j--)
            printf("%d ", j);
        printf("\n");
    }


    return 0;
}
