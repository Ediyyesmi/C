#include <stdio.h>

int main(){
	
	char x[10];
	int i=0, aCount=0;
	
	printf("enter a sentence (example: hallo.): ");
	do{
		scanf("%c" ,&x[i]);
		i++;
	}while(x[i-1] != '.');
	
	
	for(i=0;x[i-1]!='.';i++){
		if(x[i]=='A' || x[i]=='a'){
			aCount+=1;
		}
	}
	printf("There are %d letters a" ,aCount);	
	
	return 0;
}
