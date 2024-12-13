
#include <stdio.h>

int main() {
    float n;
    float t,sr;
    printf("Enter the number=");
    scanf("%f",&n);
    sr=n/2;
     do{
         t=sr;
         sr=(t+(n/t))/2;
     }while((t-sr)!=0);
     printf("%f",sr);

    return 0;
}