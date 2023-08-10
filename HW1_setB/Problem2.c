#include<stdio.h>

int main(){
	int note500,note100,note50,note20,note10,note5,note2,note1,pay_note500,pay_note100,pay_note50,pay_note20,pay_note10,pay_note5,pay_note2,pay_note1;
	int total_bill;

	printf("Enter amount:");
	scanf("%d",total_bill);

	printf("\n500:");
	scanf("%d",&note500);
	
	printf("\n100:");
	scanf("%d",&note100);
	
	printf("\n50:");
	scanf("%d",&note50);
	
	printf("\n20:");
	scanf("%d",&note20);
	
	printf("\n10:");
	scanf("%d",&note10);
	
	printf("\n5:");
	scanf("%d",&note5);
	
	printf("\n2:");
	scanf("%d",&note2);
	
	printf("\n1:");
	scanf("%d",&note1);
//500
	pay_note500=total_bill/500;
	if(pay_note500>=note500){
		total_bill=total_bill-(500*note500);
		pay_note500=note500;
	}else
		total_bill=total_bill-(500*pay_note500);
//100
	pay_note100=total_bill/100;
	if(pay_note100>=note100){
		total_bill=total_bill-(100*note100);
		pay_note100=note100;
	}else
		total_bill=total_bill-(100*pay_note100);
//50
	pay_note50=total_bill/50;
	if(pay_note50>=note50){
		total_bill=total_bill-(50*note50);
		pay_note50=note50;
	}else
		total_bill=total_bill-(50*pay_note50);
//20
	pay_note20=total_bill/20;
	if(pay_note20>=note20){
		total_bill=total_bill-(20*note20);
		pay_note20=note20;
	}else
		total_bill=total_bill-(20*pay_note20);
//10
	pay_note10=total_bill/10;
	if(pay_note10>=note10){
		total_bill=total_bill-(10*note10);
		pay_note10=note10;
	}else
		total_bill=total_bill-(10*pay_note10);
//5
	pay_note5=total_bill/5;
	if(pay_note5>=note5){
		total_bill=total_bill-(5*note5);
		pay_note5=note5;
	}else
		total_bill=total_bill-(5*pay_note5);
//2
	pay_note2=total_bill/2;
	if(pay_note2>=note2){
		total_bill=total_bill-(2*note2);
		pay_note2=note2;
	}else
		total_bill=total_bill-(2*pay_note2);
//1
	pay_note1=total_bill/1;
	if(pay_note1>=note1){
		total_bill=total_bill-(1*note1);
		pay_note1=note1;
	}else
		total_bill=total_bill-(1*pay_note1);

//can pay the bill or not
	if(total_bill==0){
		printf("Farhan can pay the bill by using the following counts of different notes:\n");
		printf("\n500:%d",pay_note500);
		printf("\n100:%d",pay_note100);
		printf("\n50:%d",pay_note50);
		printf("\n20:%d",pay_note20);
		printf("\n10:%d",pay_note10);
		printf("\n5:%d",pay_note5);
		printf("\n2:%d",pay_note2);
		printf("\n1:%d",pay_note1);
	}

}
