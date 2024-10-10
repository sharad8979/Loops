#include<stdio.h>
int main(){
	int i=1,sum=0;
	
	while(i<=20){
		if(i%2==0){
			sum=sum +(i*i*i);
		}
		i++;
	}
	printf("Sum of cube of even numbers :%d",sum);
	return 0;
}
