#include<stdio.h>
int main(){
	int n,f=1;
	printf("Enter number to calculate factorial:");
	scanf("%d",&n);
	if(n>0){
		while(n>=1){
			f=f*n;
			n--;
		}
		printf("Factorial =%d",f);
	}
	
	else{
		printf("Please Enter the positive number ");
	}
	return 0;
}
