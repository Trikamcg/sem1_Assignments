#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=n-i;k>=1;k--){
            printf(" ");
        }
        for(int j=1;j<i*2;j++){
            printf("*");
        }  
        printf("\n");
    }
    for(int i=n-1;i>=1;i--){
    for(int j=n-i;j>=1;j--){
        printf(" ");
    }
    for(int k=1;k<i*2;k++){
        printf("*");
    } 
    printf("\n");
   }
}