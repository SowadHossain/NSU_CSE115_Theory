#include<stdio.h>
#include<math.h>

int main(){
	float radius,side_square;

	printf("Enter the radius of the circle:");
	scanf("%f",&radius);
	printf("Enter the side of the square:");
	scanf("%f",&side_square);

	if(radius*2>=(sqrt(2)*side_square))
		printf("The square can be placed inside the circle");
	else
		printf("The square can not be place inside the circle");
}
