#include<stdio.h>
#include <math.h>
#define PI 3.14

int main(){
	float cone_radius,cone_height,sphear_radius;

	printf("Insert radius and height of the Cone:");
	scanf("%f,%f",&cone_radius,&cone_height);

	printf("Volume of the Cone:%.2f\n",PI*pow(cone_radius, 2)*(cone_height/3));
	printf("Surface area of the Cone:%.2f\n",PI*cone_radius*(cone_radius+sqrt(pow(cone_height,2)+pow(cone_radius,2))));
	
	printf("Insert radius of the Sphear:");
	scanf("%f",&sphear_radius);

	printf("Volume of the Sphear:%.2f\n",4*PI*pow(sphear_radius,3)/3);
	printf("Surface area of the Sphear:%.2f\n",4*PI*pow(sphear_radius,2));
}
