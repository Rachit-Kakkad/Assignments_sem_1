#include <stdio.h>

int main()
{

    int n = 5;
    printf("36th pattern :\n");
    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= i - 1; s++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("%c", 'A' + j - 1);
        printf("\n");
    }
    return 0;
}