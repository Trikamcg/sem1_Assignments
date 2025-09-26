#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int m = 1; m <= n; m++)
    {
        for (int j = n - m; j >= 1; j--)
        {
            printf(" ");
        }
         
        for (int k = 1; k <= m; k++)
        {
            printf("%c", k + 64);
        }
            for (int a = m-1; a >=1 ; a--)
            {
                printf("%c", a + 64);
            }
        
  
        printf("\n");
    }

    for (int i = n-1; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        
        
            for (int a = 1; a < i; a++)
            {
                printf("%c", a + 64);
            }
        
        for (int k = i; k >= 1; k--)
        {
            printf("%c", k + 64);
        }
        printf("\n");
    }
}