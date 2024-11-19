#include <stdio.h>

int f(int n){
	if(n==1){
		return n;
	}else{
		return (n+f(n-1));
	}
}

int main(){
	
	int n=7;
	printf("%d" ,f(n)); 
	return 0;
}
