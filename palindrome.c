#include<stdio.h>
int main(){
	int p,n,r,rev=0;
	printf("Enter the number");
	scanf("%d",&n);
	p=n;
	while(n>0){
		r=n%10;
		rev=rev*10+r;
		n=n/10;
      
	}
	if(p==rev){
	printf("Number is palindrome");	
	}
	else{
		printf("Number is not  palindrome");
	}
	return 0;
}
