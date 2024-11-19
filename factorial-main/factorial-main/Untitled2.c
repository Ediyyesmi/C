#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, number, factorial;
	printf("enter a number: ");
	scanf("%d" ,&number);
	factorial=1;
	
	for(i=1;i<=number;i++){
		factorial *=i;
	}
	printf("%d!= %d" ,number, factorial);
	
	
	return 0;
}
