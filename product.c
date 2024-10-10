#include<stdio.h>
int main(){
	int i=1,p=1;
	while(i<=5){
		p=p*i;
		i++;
	}
	printf("Product = %d",p);
	return 0;
}
