#include<stdio.h>

int main(){
    int number;
    int count=0;
    printf("Enter an integer: ");
    scanf("%d",&number);

    for(int i = 1;count!=number;i++){

        int sum = 0;

        for(int j = 1;j<=i/2;j++){
            if(i%j==0)
                sum+=j;
        }
        if(sum==i)
            count++;
        if(count==number){
            printf("%dth perfect number is %d",number,i);
            break;
        }
    }
}
