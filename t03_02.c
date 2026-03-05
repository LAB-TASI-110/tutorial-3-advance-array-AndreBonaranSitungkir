#include <stdio.h>

int main() {
    int n;
    int nilai;
    int sum = 0;
    double average;
    int count_above_average = 0;

    // Karena kita perlu menyimpan semua nilai untuk membandingkan dengan rata-rata,
    // kita akan menggunakan array. Ukuran maksimum diasumsikan cukup kecil
    // untuk tugas mahasiswa semester 2. Misal, maksimum 100 nilai.
    int scores[100]; // Asumsi n tidak akan melebihi 100

    // Membaca jumlah nilai (n)
    scanf("%d", &n);

    // Membaca n nilai dan menghitung totalnya, sekaligus menyimpannya di array
    for (int i = 0; i < n; i++) {
        scanf("%d", &nilai);
        scores[i] = nilai; // Simpan nilai ke dalam array
        sum += nilai;
    }

    // Menghitung rata-rata
    // Pastikan casting ke double untuk hasil pembagian yang presisi
    average = (double)sum / n;

    // Menghitung banyaknya mahasiswa yang nilainya di atas atau sama dengan rata-rata
    for (int i = 0; i < n; i++) {
        if (scores[i] >= average) {
            count_above_average++;
        }
    }

    // Menampilkan jumlah seluruh nilai
    printf("%d\n", sum);

    // Menampilkan nilai rata-rata dengan 2 digit presisi
    printf("%.2f\n", average);

    // Menampilkan banyaknya mahasiswa yang nilainya di atas atau sama dengan rata-rata
    printf("%d\n", count_above_average);

    return 0;
}