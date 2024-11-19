#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[15];
    int midterm;
    int final;
};

int main() {
    struct Student* dizi[5];
    int i, j, ort = 0;

    // Bellekten alan tahsisi
    for (i = 0; i < 5; i++) {
        dizi[i] = (struct Student*)malloc(sizeof(struct Student));
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Öðrenci adý: ");
            scanf("%s", dizi[i]->name);
            printf("Vize: ");
            scanf("%d", &(dizi[i]->midterm));
            printf("Final: ");
            scanf("%d", &(dizi[i]->final));
            ort = (dizi[i]->midterm * 0.4 + dizi[i]->final * 0.6);
            printf("Ortalama: %d\n", ort);
        }
    }

    // Bellekten tahsis edilen alaný serbest býrak
    for (i = 0; i < 5; i++) {
        free(dizi[i]);
    }

    return 0;
}

