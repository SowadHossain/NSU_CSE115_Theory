#include <stdio.h>

int main()
{
    long int num_bin,num_dec=0,temp;

    printf("Enter a binary number:");
    scanf("%ld",&num_bin);

    for(int i = 0;num_bin!=0;i++){
        temp = 0;
        if(num_bin%10==1){
            temp=1;
            for(int j = 1;j<=i;j++)
                temp*=2;
        }
        num_dec += temp;
        num_bin/=10;

    }
    printf("Decimal = %d",num_dec);
}
