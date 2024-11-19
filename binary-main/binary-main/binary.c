#include <stdio.h>

void binary(int n) {
    if (n > 1)
        binary(n / 2);
    
    printf("%d", n % 2);
}

int main() {
    int num;
    printf("Bir sayi giriniz: ");
    scanf("%d", &num);
    printf("Ikilik karsiligi: ");
    binary(num);
    printf("\n");
    return 0;
}

