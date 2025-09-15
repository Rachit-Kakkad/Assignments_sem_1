#include <stdio.h>

int main()
{

    int n = 5;
    printf("35th pattern :\n");
    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= i - 1; s++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }
    return 0;
}