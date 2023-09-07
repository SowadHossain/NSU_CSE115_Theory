#include<stdio.h>

int main(){
    int numLine;
    char ch = 'A'-1;
    printf("Enter number of lines: ");
    scanf("%d",&numLine);

    //printing the triangle
    for(int i = 1;i<=numLine;i++){
        for(int j = 1;j<=numLine-i;j++)
            printf(" ");
        for(int j = 1;j<=i;j++){
            ch+=1;
            printf("%c",ch);
            printf(" ");
        }printf("\n");
    }
}
