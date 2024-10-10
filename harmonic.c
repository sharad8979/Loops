#include<stdio.h>
int main(){
	int n,u=1,i;
	float j=1;
	float sum=0;
	printf("Enter the number of terms which you want to display in harmonic series:");
	scanf("%d" ,&n);
	for(i=1;i<=n;i++){
		printf("%d /%d + ",u,i);
		sum=sum+(u/j);
		j++;
	}
	printf("\n sum of series =%f",sum);
	return 0;
}
