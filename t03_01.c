#include <stdio.h>

int main() {
    int n, nilai, sum = 0;
    double average;

    // Membaca jumlah nilai (n)
    scanf("%d", &n);

    // Membaca n nilai dan menghitung totalnya
    for (int i = 0; i < n; i++) {
        scanf("%d", &nilai);
        sum += nilai;
    }

    // Menghitung rata-rata
    // Pastikan casting ke double untuk hasil pembagian yang presisi
    average = (double)sum / n;

    // Menampilkan jumlah seluruh nilai
    printf("%d\n", sum);

    // Menampilkan nilai rata-rata dengan 2 digit presisi
    printf("%.2f\n", average);

    return 0;
}