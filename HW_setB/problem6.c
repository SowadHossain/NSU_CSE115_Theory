#include<stdio.h>

int main(){
    int n;
    int firstnum=0;
    int secondnum=1;
    int temp;
    printf("Enter n: ");
    scanf("%d",&n);

    printf("First %d Fibonacci numbers: ",n);
    printf("%d ,",firstnum);
    for(int i = 0;i<n;i++){
        printf("%d ,",secondnum);
        temp = firstnum;
        firstnum = secondnum;
        secondnum += temp;
    }
}
