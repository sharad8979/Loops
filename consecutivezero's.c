#include<stdio.h>

int main(){
	int c,n,m=0,t=0;
	printf("Enter any binary number:");
	scanf("%d",&n);
	do{
		if(n%10==0){
		
			c++;
			t++;
		}
		else{
			c=0;
		}
		if(m<c){
			m=c;
		}
		n=n/10;
	}while(n!=0);
	printf("Total number of zeros : %d",t);
	printf("\n Maximum consecutive zeros : %d",m);
	
	return 0;
}
