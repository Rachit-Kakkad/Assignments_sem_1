#include <stdio.h>
int main()
{

    int n = 5;
    printf("47th pattern :\n");
    int num = 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num += 2;
        }
        printf("\n");
    }
    return 0;
}