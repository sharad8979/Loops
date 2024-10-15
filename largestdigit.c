#include<stdio.h>

int main(){
	int n,l=0,r;
	
	printf("Enter any number:");
	scanf("%d",&n);
     do{
     	r=n%10;
     	if(l<r){
     		l=r;
		 }
		 n=n/10;
	 }	while(n!=0);
	 
	 printf("Largest digit of a number : %d",l);
	return 0;
}
