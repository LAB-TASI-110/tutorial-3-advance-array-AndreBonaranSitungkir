#include <stdio.h> // Untuk fungsi input/output seperti scanf dan printf
#include <limits.h> // Untuk INT_MAX dan INT_MIN (untuk inisialisasi min/max nilai)

int main() {
    int n;
    int sum = 0;
    double average;
    int count_above_average = 0;
    int max_nilai = INT_MIN; // Inisialisasi dengan nilai terkecil yang mungkin
    int min_nilai = INT_MAX; // Inisialisasi dengan nilai terbesar yang mungkin

    // Karena kita perlu menyimpan semua nilai untuk membandingkan dengan rata-rata
    // dan mencari nilai min/max, kita akan menggunakan array. Ukuran maksimum
    // diasumsikan cukup kecil untuk tugas mahasiswa semester 2. Misal, maksimum 100 nilai.
    int scores[100]; // Asumsi n tidak akan melebihi 100

    // Membaca jumlah nilai (n)
    scanf("%d", &n);

    // Membaca n nilai, menghitung totalnya, menyimpannya di array,
    // sekaligus mencari nilai maksimum dan minimum saat input
    for (int i = 0; i < n; i++) {
        int current_nilai;
        scanf("%d", &current_nilai);
        scores[i] = current_nilai; // Simpan nilai ke dalam array
        sum += current_nilai;

        // Update nilai maksimum
        if (current_nilai > max_nilai) {
            max_nilai = current_nilai;
        }
        // Update nilai minimum
        if (current_nilai < min_nilai) {
            min_nilai = current_nilai;
        }
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

    // Menampilkan rentang nilai (nilai maksimum - nilai minimum)
    printf("%d\n", max_nilai - min_nilai);

    return 0;
}