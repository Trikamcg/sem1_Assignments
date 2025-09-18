#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
    for(int k=n; k>=i; k--){
        printf(" ");
    }
        for (int j = 1; j <= i; j++)
        {
            printf("%c", j+64);
        }
    printf("\n");
    }
    return 0;
}
