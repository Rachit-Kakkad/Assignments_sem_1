#include <stdio.h>

int main()
{
    int n = 5;

    printf("11th pattern :");
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= 2 * (n - i); s++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }

    return 0;
}
