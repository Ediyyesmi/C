#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a, b, c, i, number;
	a=1;
	b=1;
	printf("enter a number: ");
	scanf("%d" ,&number);
	printf("1 1 ");
	
	for(i=3;i<=number;i++){
		a=b;
		b=c;
		c=a+b;
		printf("%d " ,c);
	}
	
	
	return 0;
}
