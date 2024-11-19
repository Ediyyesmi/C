#include <stdio.h>

int main(){
	
	char a[40];
	int i=0;
	
	printf("enter a word: ");
	gets(a);
	
	while(a[i]!='\0'){
		i++;
	}
	printf("length is %d: ",i);
	
	return 0;
}
