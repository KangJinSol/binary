#include <stdio.h>
#include <string.h>

void DecToBinary(int n){
	if(n < 2) printf("값 : %d\n",n);
	else{
		DecToBinary(n/2);
		printf("%d",n%2);
	}
}
int main(void){
	int d;
	printf("정수입력 : ");
	scanf("%d",&d);
	DecToBinary(d);
	printf("\n");
	return 0;
}
