#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for(int j=n*2-1;j>=1;j--){
            if(i==1||i==n||j==1){
                printf("*");
            }else{
                
                printf("  ");
            }
        }






    printf("\n");
}

    return 0;
}