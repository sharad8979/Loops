#include<stdio.h>
int main(){
	int a,d,n,i;
	printf("Enter the first term of AP=");
	scanf("%d",&a);
	printf("Enter the common difference=");
	scanf("%d",&d);
	printf("Enter the number of terms =");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		 int t=0;
		 t=a+(i*d);
		 printf(" %d",t);
	}
	
	
	
	return 0;
}
