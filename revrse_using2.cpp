#include<stdio.h>

int main(){
	
	int n,rev=0;
	
	printf("Enter any number:");
	scanf("%d",&n);
	do{
		
		rev=(rev*10)+n%10;
		n=n/10;
		
	}while(n!=0);
	
	printf("Reverse : %d",rev);
}
