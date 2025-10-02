#include <stdio.h>

int main()
{
    int n;
    int num = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int k = n - i; k >= 1; k--)
        {
            printf("   ");
        }
        for (int j = 1; j < i * 2; j++)
        {
            printf(" %2d", num);
            num++;
        }
        printf("\n");
    }
}