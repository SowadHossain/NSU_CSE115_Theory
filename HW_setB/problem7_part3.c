#include<stdio.h>

int main(){
    int numLine;
    printf("Enter number of lines: ");
    scanf("%d",&numLine);

    for(int i = 1;i<=numLine;i++){
        for(int j = 1;j<=numLine-i;j++)
            printf(" ");

        printf("*");

        for(int j = 2;j<i*2-1;j++)
            printf(" ");

        if(i>1)
            printf("*");

        printf("\n");
    }

    for(int i = numLine-1;i>0;i--){
        for(int j = 1;j<=numLine-i;j++)
            printf(" ");
        printf("*");
        for(int j = 2;j<i*2-1;j++)
            printf(" ");
        if(i>1)
            printf("*");
        printf("\n");
    }
}
