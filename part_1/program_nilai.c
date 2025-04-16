#include <stdbool.h>
#include <stdio.h>

bool cek_lulus(int nilai_teori, int nilai_praktik) {
  if (nilai_teori >= 60 && nilai_praktik >= 70) {
    return true;
  } else {
    return false;
  }
}

bool validasi_input(int nilai) {
  if (!(nilai >= 0 && nilai <= 100)) {
    return false;
  }
  return true;
}

int main() {
  int nilai_teori, nilai_praktik;

  printf("masukkan nilai ujian teori (0 - 100): ");
  scanf("%d", &nilai_teori);

  printf("masukkan nilai ujian praktik (0 - 100): ");
  scanf("%d", &nilai_praktik);

  if (!validasi_input(nilai_teori) || !validasi_input(nilai_praktik)) {
    printf("input yang diberikan tidak valid harus rentang 0 - 100\n");
    return 1;
  }

  if (cek_lulus(nilai_teori, nilai_praktik)) {
    printf("selamat anda lulus ujian\n");
  } else {
    printf("kamu harus ikut remedial");
  }

  return 0;
}
