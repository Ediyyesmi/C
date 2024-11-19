#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int number, i=1, SmallestNumber=0, LargestNumber=0;
	
	do{
		printf("enter a number: ",i);
		scanf("%d" ,&number);
		
		if(number==0) break;
		if(number<SmallestNumber) SmallestNumber=number;
		if(number>LargestNumber) LargestNumber=number;
		i++;
	}while(number!=0);
	
	printf("SmallestNumber is %d: " ,SmallestNumber);
	printf("\nLargestNumber is %d: " ,LargestNumber);
	
	
	return 0;
}
