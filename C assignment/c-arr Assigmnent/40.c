#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        for(int k=n-i;k>=1;k--){
            printf(" ");
        }
        for(int j=1;j<i*2;j++){
            if(i==1||i==n||j==1||j==i){
                printf("* ");
            }else{
                
                printf("  ");
            }
        }printf("\n");
        
    }
    for(int l=1;l<n*2;l++){
            printf("*");
        }
}