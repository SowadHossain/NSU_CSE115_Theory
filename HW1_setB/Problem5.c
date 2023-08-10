#include<stdio.h>

int main(){
	int number;
	printf("Enter a number:");
	scanf("%d",&number);

	if(number%5==0 && number%11==0)
		printf("%d is a multipule of both 5 and 11",number);
	else if(number%5==0)
		printf("%d is a multiple of only 5",number);
	else if(number%11==0)
		printf("%d is a multiple of only 11",number);
	else
		printf("%d in not a multiple of 5 or 11",number);
}
