#include<stdio.h>

int main(){
    int num,rev_num=0;
    
    printf("Enter n:");
    scanf("%d",&num);
    
    int temp = num;
    while(temp!=0){
        rev_num*=10;
        rev_num+= temp%10;
        temp/=10;
    }
    int isprime_num =1,isprime_rev_num = 1;
    
    for(int i = 2;i<=num/2;i++){
        if(num%i==0){
            isprime_num = 0;
            break;
        }
    }
    
    for(int i = 2;i<=rev_num/2;i++){
        if(rev_num%i==0){
            isprime_rev_num = 0;
            break;
        }
    }
    
    if(isprime_num==1&&isprime_rev_num)
        printf("Both %d and %d are prime",num,rev_num);
    else if(isprime_num==1&&isprime_rev_num==0)
        printf("%d is prime but %d is not prime",num,rev_num);
    else if(isprime_num==0&&isprime_rev_num==1)
        printf("%d is not prime but %d is prime",num,rev_num);
    else
        printf("Neither %d nor %d are prime",num,rev_num);
}