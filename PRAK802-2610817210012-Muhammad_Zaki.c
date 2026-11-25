#include <stdio.h>

void tukar (int *a, int *b) {
    int penampungan = *a;
    *a = *b;
     *b = penampungan;
}

int main () {
    int andi;
    int budi;

    scanf("%d %d", &andi, &budi);

    printf("Sebelum ditukar: Andi = %d Budi = %d\n", andi, budi);
    tukar(&andi, &budi);
    printf("Setelah ditukar: Andi = %d Budi = %d\n", andi, budi);

    return 0;
}