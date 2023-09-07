#include <stdio.h>

int main(){
    int num;

    printf("Enter a number:");
    scanf("%d",&num);

    int reversed=0;
    for(int i=num;i!=0;i/=10){
        reversed*=10;
        reversed+= i%10;
    }
    if(reversed==num){
        for(int i=2;i<=num/2;i++ ){
            if(num == i*i){
                printf("\nIt is a square palindrome number");
                break;
            }
            if(num < i*i){
                printf("\nnot a square palindrome number.");
                break;
        }
        }
    }
    else
        printf("\nnot a square palindrome number.");
}
