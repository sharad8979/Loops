#include<stdio.h>

int main(){
  int i=1,n,c=0;
  printf("Enter Number:");
  scanf("%d",&n);
  
  do{
  	if(n/i==i){
  		c++;
	  }
	  i++;
  }	while(c==0 && i<(n/2));
	
	if(c==1){
		printf("Perfect square");
	}else{
		printf("Not perfect square");
	}
	
	return 0;
}
