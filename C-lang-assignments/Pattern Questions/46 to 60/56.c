#include <stdio.h>
int main()
{
    int n = 5;
    printf("56th pattern:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int dist = i;
            if (j < dist)
                dist = j;
            if (n - 1 - i < dist)
                dist = n - 1 - i;
            if (n - 1 - j < dist)
                dist = n - 1 - j;

            if (dist % 2 == 0)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
