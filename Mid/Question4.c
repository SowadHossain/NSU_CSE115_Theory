#include<stdio.h>

int main(){
    int n;
    
    printf("Enter n:");
    scanf("%d",&n);
    
    for(int i = n;i>0;i--){
        for(int j = 1;j<=n-i;j++)
            printf(" ");
        for(int j = 1;j<=i*2-1;j++)
            printf("*");
        printf("\n");
    }
    for(int i = 2; i<n;i++){
        for(int j = 1;j <= n-i;j++)
            printf(" ");
        printf("*");
        for(int j=1;j<=2*(i-1)-1;j++){
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    
    
    for(int i = 1;i<=n*2-1;i++)
        printf("*");
}