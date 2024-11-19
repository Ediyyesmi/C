#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float average=0, notes[3];
	printf("enter three notes: ");
	scanf("%f%f%f" ,&notes[0], &notes[1], &notes[2]);
	
	average=(notes[0]+notes[1]+notes[2])/3;
	printf("average: %.2f" ,average);
	
	
	return 0;
}
