#include <stdio.h>

int f(int n){
	if(n==0){
		return 0;
	}else{
		f(n-1);
	}
	printf("%d\n" ,n);
}

int main(){
	
	int n=7;
	f(n);
	
	return 0;
}
