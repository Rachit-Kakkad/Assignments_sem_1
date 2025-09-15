#include <stdio.h>
int main()
{

    int n = 5;
    printf("53rd pattern :\n");
    int count = 1;
    for (int i = 1; i <= 4; i++)
    {
        for (int s = 1; s <= 4 - i; s++)
            printf("   ");
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("%2d ", count++);
        }
        printf("\n");
    }
    return 0;
}