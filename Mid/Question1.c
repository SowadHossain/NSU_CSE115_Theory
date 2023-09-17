#include<stdio.h>

int main(){
    int n;
    
    printf("Enter n:");
    scanf("%d",&n);
    
    float sum=0,temp1=1,temp2 =2;
    
    for(int i = 1;i<=n;i++){
        
        temp1*=i;
        if(i>1)
            temp2*=5;
        
        if(i%2==0)
            sum -= temp1/temp2;
        else
            sum += temp1/temp2;
    }
    printf("Sum : %f",sum);
    
}