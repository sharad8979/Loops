#include<stdio.h>
int main(){
	int num,r,sum=0;
	printf("Enter the number of more than one digit:");
	scanf("%d",&num);
	while(num>0){
		r=num%10;
		num=num/10;
		sum=sum+r;
	}
	printf("\nSum = %d",sum);
	return 0;
}
