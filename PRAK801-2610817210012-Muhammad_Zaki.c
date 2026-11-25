#include <stdio.h>

int main () {
    int number;
    int *pointer = &number;

    scanf("%d", &number);

    printf("Nilai Variabel = %d\n", number);
    printf("Alamat variabel = %p\n", pointer);
    printf("Nilai melalui pointer = %d\n", *pointer);
    
    *pointer = *pointer * 2;

    printf("Nilai setelah diubah lewat pointer = %d\n", number);
    
    return 0;
}