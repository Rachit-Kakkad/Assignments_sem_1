#include <stdio.h>

int main()
{
    int n = 5;

    printf(" 1st pattern :");
    printf("\n");
    for (int i = 1; i <= n; i++)
        printf("*");
    printf("\n\n");

    printf("2nd  pattern :");
    printf("\n");
    for (int i = 1; i <= n; i++)
        printf("%d ", i);
    printf("\n\n");

    printf("3rd pattern :");
    printf("\n");
    for (int i = 0; i < n; i++)
        printf("%c ", 'A' + i);
    printf("\n\n");

    printf("4rth pattern :");
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            printf("*");
        printf("\n");
    }
    printf("\n\n");

    printf("5th pattern :");
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            printf("%d ", j);
        printf("\n");
    }
    printf("\n\n");

    printf("6th pattern :");
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%c ", 'A' + j);
        printf("\n");
    }
    printf("\n\n");

    printf("7th pattern :");
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    printf("\n\n");

    printf("8th pattern :");
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
    printf("\n\n");

    printf("9th pattern :");
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
            printf("%c ", 'A' + j);
        printf("\n");
    }
    printf("\n\n");

    printf("10th pattern :");
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    printf("\n\n");

    printf("11th pattern :");
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= 2 * (n - i); s++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
    printf("\n\n");

    printf("12th pattern :");
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= 2 * (n - i); s++)
            printf(" ");
        for (int j = 0; j < i; j++)
            printf("%c ", 'A' + j);
        printf("\n");
    }
    printf("\n\n");

    printf("13th pattern :");
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    printf("\n\n");

    printf("14th pattern :");
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= 2 * (n - i); s++)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("%d ", j);
        printf("\n");
    }
    printf("\n\n");

    printf("15th pattern :");
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= 2 * (n - i); s++)
            printf(" ");
        for (int j = 0; j < 2 * i - 1; j++)
            printf("%c ", 'A' + j);
        printf("\n");
    }
    printf("\n\n");

    return 0;
}
