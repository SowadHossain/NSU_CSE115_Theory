#include<stdio.h>

int main(){
	int real1,real2,imag1,imag2,result_real,result_imag;

	printf("Enter Real part of first complex number:");
	scanf("%d",&real1);
	printf("Enter Imaginary part of first complex number:");
	scanf("%d",&imag1);
	
	printf("Enter Real part of second complex number:");
	scanf("%d",&real2);
	printf("Enter Imaginary part of second complex number:");
	scanf("%d",&imag2);
//adding the numbers;
	if((imag1+imag2)>=0)
		printf("\nSum:%d+%di",(real1+real2),(imag1+imag2));
	else
		printf("\nSum:%d%di",(real1+real2),(imag1+imag2));
	
	if((imag1-imag2)>=0)
		printf("\nDifferance:%d+%di",(real1-real2),(imag1-imag2));
	else
		printf("\nDifferance:%d %di",(real1-real2),(imag1-imag2));
	
	if((real1*imag2)+(real2*imag1)>=0)
		printf("\nProduct:%d+%di",(real1*real2)+(imag1*imag2),(real1*imag2)+(real2*imag1));
	else
		printf("\nProduct:%d %di",(real1*real2)+(imag1*imag2),(real1*imag2)+(real2*imag1));
}
