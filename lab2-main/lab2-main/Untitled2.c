#include <stdio.h>

int hesapla(int dizi[], int n, int* sayac) {
    if(n == 0) {
        return 0;
    } else {
        int toplam = dizi[n-1] + hesapla(dizi, n-1, sayac);
        if(dizi[n-1] < 50) {
            (*sayac)++;
        }
        return toplam;
    }
}

int main() {
    int i, size, ort = 0, sayac = 0;
    int dizi[10];

    printf("Enter size of array (max 10): ");
    scanf("%d", &size);
    
    printf("Enter array elements: ");
    for(i = 0; i < size; i++) {
        scanf("%d", &dizi[i]);
    }
    
    ort = hesapla(dizi, size, &sayac) / size;
    
    printf("ortalama: %d\n", ort);
    printf("kalan kisi sayisi: %d\n", sayac);
    
    return 0;
}

