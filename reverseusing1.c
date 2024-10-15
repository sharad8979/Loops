#include<stdio.h>

int main(){
	
	int num;
	
	printf("Enter any number:");
	scanf("%d",&num);
	do{
		printf("%d",num%10);
		num=num/10;
	}while(num!=0);
	return 0;
}
