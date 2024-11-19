#include <stdio.h>

int big(int dizi[], int n){
	int max=0;
    if(n == 0){
        return 0;
    }else{
        max=big(dizi, n-1);
        return (dizi[n - 1] > max) ? dizi[n - 1] : max;
    }
}

int main(){
    int i, size, max = 0;
    int dizi[10];

    printf("Enter size of array (max 10): ");
    scanf("%d", &size);
    
    if (size > 10 || size <= 0) {
        printf("Invalid array size. Please enter a size between 1 and 10.\n");
        return 1;
    }

    printf("Enter array elements: ");
    for(i = 0; i < size; i++){
        scanf("%d", &dizi[i]);
    }
    
    max = big(dizi, size);
    
    printf("max of array elements: %d\n", max);
    
    return 0;
}
