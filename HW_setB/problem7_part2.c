#include<stdio.h>

int main(){
    int numLine;
    printf("Enter number of lines: ");
    scanf("%d",&numLine);

    //printing the triangle
    for(int i = 1;i<=numLine;i++){
        for(int j = 1;j<=numLine-i;j++)
            printf(" ");
        for(int j = 1;j<=i;j++){
            if(j%2==0)
                printf("1");
            else
                printf("0");
        }printf("\n");
    }
}
