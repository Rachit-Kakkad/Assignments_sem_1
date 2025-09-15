#include <stdio.h>
int main()
{

    int n = 5;
    printf("50th pattern :\n");
    int start = (n * (n + 1)) / 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%2d ", start--);
        }
        printf("\n");
    }
    return 0;
}