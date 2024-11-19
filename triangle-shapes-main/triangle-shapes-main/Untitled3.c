#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, j, a;
	
	printf("enter a number: ");
	scanf("%d" ,&a);
	
	for(i=0;i<=a;i++){
		for(j=a;j>i;j--){
			printf("%d " ,a-i);
		}
		printf("\n");
		
	}	
	
	
	return 0;
}
