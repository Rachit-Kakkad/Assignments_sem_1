#include <stdio.h>
int main()
{
    int n = 5;
    printf("27th pattern :\n");
    for (int i = 0; i < n; i++)
    {
        for (int s = 0; s < i; s++)
            printf(" ");
        for (int j = 1; j <= 2 * (n - i) - 1; j++)
            printf("%d ", j);
        printf("\n");
    }
    return 0;
}