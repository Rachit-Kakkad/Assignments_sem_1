#include <stdio.h>

int main()
{
    int n = 5;

    printf("5th pattern :");
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            printf("%d ", j);
        printf("\n");
    }

return 0;
}