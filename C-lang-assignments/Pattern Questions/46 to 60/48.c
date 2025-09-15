#include <stdio.h>
int main()
{

    int n = 5;
    printf("48th pattern :\n");
    int num = 1;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            printf("%2d ", num++);
        }
        printf("\n");
    }
    return 0;
}