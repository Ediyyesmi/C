#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, j, line;
	
	printf("enter a number of line: ");
	scanf("%d" ,&line);
	
	for(i=1;i<=line;i++){
		for(j=1;j<=i;j++){
			printf("#");
		}
		printf("\n");
	}
	
	
	return 0;
}
