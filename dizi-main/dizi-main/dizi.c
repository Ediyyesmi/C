#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, j, dizi[3], n, gecici;
	printf("dizi kac elemanli: ");
	scanf("%d",&n);
	
	printf("dizi elemanlarini gir: ");
	for(i=0;i<n;i++){
		scanf("%d" ,&dizi[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			if(dizi[i]<dizi[i]){
				gecici=dizi[j];
				dizi[j]=dizi[i];
				dizi[j]=gecici;
			}
		}
	}
	
	for(i=0;i<n;i++){
		printf("%d - " ,dizi[i]);
	}
	
	
	return 0;
}
