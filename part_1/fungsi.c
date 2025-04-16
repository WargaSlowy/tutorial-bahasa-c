// tipe_data nama_fungsi(tipe_data nama_parameter) {
//    ....
//    return nilai;
// }
#include <stdio.h>

// void apa_kabar() {
//   printf("halo ini adalah pesan dari fungsi namanya apa_kabar()\n");
//   printf("ini adalah hitung menghitung\n");
//   printf("%d\n", 20 + 5);
// }

// int tambah(int nilai_pertama, int nilai_kedua) {
//   return nilai_pertama + nilai_kedua;
// }

// void cetak_array(int array[], int ukuran) {
//   for (int i = 0; i < ukuran; i++) {
//     printf("%d ", array[i]);
//   }
//   printf("\n");
// }

float hitung_luas_lingkaran(float jari) { return 3.14 * jari * jari; }

int main() {
  // apa_kabar();
  // int angka_perama = 20, angka_kedua = 20;
  // int hasil_kedua = tambah(angka_perama, angka_kedua);
  // int hasil = tambah(2, 20);
  //
  // printf("hasil penjumlahan adalah: %d\n", tambah(2, 3));
  // printf("hasil dari pertambahan kedua adalah: %d\n", hasil);
  // printf("hasil dari pertambahan ketiga adalah: %d\n", hasil_kedua);

  // int angka[] = {10, 20, 30, 40, 50, 60};
  // int ukuran = sizeof(angka) / sizeof(angka[0]);
  // cetak_array(angka, ukuran);
  printf("hasil luas lingkaran adalah: %.2f\n", hitung_luas_lingkaran(3.2));
  return 0;
}
