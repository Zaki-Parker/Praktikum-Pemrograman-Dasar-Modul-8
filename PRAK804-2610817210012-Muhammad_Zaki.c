#include <stdio.h>

struct Peserta {
    char nama[50];
    int umur;
    int skor;
};

int main() {
    struct Peserta p[10];
    int n, i, tertinggi = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s %d %d", p[i].nama, &p[i].umur, &p[i].skor);
    }

    // pakai tanda > (bukan >=) supaya jika skor sama, yang diinput lebih dulu tetap juara
    for (i = 1; i < n; i++) {
        if (p[i].skor > p[tertinggi].skor) {
            tertinggi = i;
        }
    }

    printf("Peserta dengan skor tertinggi adalah %s dengan skor %d\n",
        p[tertinggi].nama, p[tertinggi].skor);

    return 0;
}