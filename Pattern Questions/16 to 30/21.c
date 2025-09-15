#include <stdio.h>
int main()
{
    int n = 5;
    printf("21st pattern :\n");
    for (int i = 0; i < n; i++)
    {
        for (int s = 0; s < i; s++)
            printf(" ");
        for (int j = n; j > i; j--)
            printf("*");
        printf("\n");
    }
    return 0;
}