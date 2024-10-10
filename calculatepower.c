#include<stdio.h>
int main(){
	int p,n,ans=1;
	printf("Enter the number and also power :");
	scanf("%d %d",&n,&p);
	
	while(p>0){
		ans=ans*n;
		p--;
	}
	printf("Answer : %d",ans);
	
	return 0;
}
