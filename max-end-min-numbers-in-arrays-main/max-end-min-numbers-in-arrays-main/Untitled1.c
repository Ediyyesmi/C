#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int numbers[100];
	int i, size, max=0, min=100;
	
	printf("enter a positive number: ");
	scanf("%d" ,&size);
	
	printf("enter array numbers: ");
	for(i=0;i<size;i++){
		scanf("%d" ,&numbers[i]);
	}
	
	for(i=0;i<size;i++){
		if(numbers[i]<min){
			min=numbers[i];
	    }
	    if(numbers[i]>max){
	    	max=numbers[i];
		}
	}
	
	printf("max number is: %d\n" ,max);
	printf("min numbers is: %d " ,min);
	
	
	
	
	return 0;
}
