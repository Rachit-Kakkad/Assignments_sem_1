#include <stdio.h>
int main()
{
    int n = 5;
    printf("57th pattern:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int top = i;
            int left = j;
            int bottom = n - 1 - i;
            int right = n - 1 - j;

            int dist = top;
            if (left < dist)
                dist = left;
            if (bottom < dist)
                dist = bottom;
            if (right < dist)
                dist = right;

            printf("%d", dist + 1);
        }
        printf("\n");
    }
    return 0;
}
