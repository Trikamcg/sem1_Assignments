#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
   for(int i=n;i>=1;i--){
    for(int j=n-i;j>=1;j--){
        printf(" ");
    }
    for(int k=1;k<i*2;k++){
        printf("%d",k);
    } 
    printf("\n");
   }
    return 0;
}
