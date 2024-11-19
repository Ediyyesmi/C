#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int numbers[5], i;
	
	printf("enter array numbers: ");
	for(i=0;i<5;i++){
		scanf("%d" ,&numbers[i]);
	}
	
	printf("original order: ");
	for(i=0;i<5;i++){
		printf("%d " ,numbers[i]);
	}
	
	printf("\n reverse order: ");
	for(i=4;i>=0;i--){
		printf("%d " ,numbers[i]);
	}
	
	
	return 0;
}
