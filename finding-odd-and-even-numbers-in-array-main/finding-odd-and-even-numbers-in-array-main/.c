#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int numbers[100];
	int i, unit;
	
	printf("enter a positive number: ");
	scanf("%d" ,&unit);
	
	printf("enter array numbers: ");
	for(i=0;i<unit;i++){
		scanf("%d" ,&numbers[i]);
	}
	
	printf("odd numbers: ");
	for(i=0;i<unit;i++){
		if(numbers[i]%2 == 1)
			printf("%d " ,numbers[i]);
	}
	
	printf("\neven numbers: ");
	for(i=0;i<unit;i++){
		if(numbers[i]%2 == 0)
			printf("%d " ,numbers[i]);
	}
	
	
	return 0;
}
