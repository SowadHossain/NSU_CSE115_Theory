#include<stdio.h>

int main(){
    int n,x;
    float sum =1;
    printf("Enter the value of x & n: ");
    scanf("%d %d",&x,&n);
//the term counter
    for(int i = 1,power=2;i < n;i++,power+=2){
        int factor=1;
        int x_powr=1;
        //calculate the factors
        for(int j = 2;j<=i;j++)
            factor*=j;
        //loop to get the power of x and calculate the power
        for(int j = 1;j<=power;j++)
            x_powr*=x;
        //if else for +/-
        if(i%2==1){
            sum -= (float)x_powr/factor;
        }else
            sum += (float)x_powr/factor;
    }
    printf("\nsum = %.2f",sum);
}
