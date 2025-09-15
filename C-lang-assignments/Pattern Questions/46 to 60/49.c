#include <stdio.h>
int main()
{

    int n = 5;
    printf("49th pattern :\n");
    char ch = 'A';
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            printf("%c ", ch++);
        }
        printf("\n");
    }
    return 0;
}