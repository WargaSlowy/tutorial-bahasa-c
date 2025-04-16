// 1. int -> 4 byte (32bit) -> -2. -> 
// signed positif dan negatif -> int 
// unsigned positif -> unsigned int
// int nilai = -40;
// unsigned int nilai_kita = -40;
//
// 2. short -> 2 byte (16bit) -> -32rb
// signed, unsigned
// short ukuran = -20;
// unsigned short skor = -320;
//
// 3. long -> 4 byte (32bit) 8 byte (64bit)
// signed, unsigned
// long populasi = 100000;
// unsigned long panjang = 500000;
//
// 4. long long -> 8 byte (64bit)
// signed, unsigned
// long long angkaGede = 123456789;
// unsigned long long besarLagi = 987654321;
#include <stdio.h>

int main() {
  int umur = 25;
  short temperatur = -10;
  long populasi = 100000;
  long long angka_gede = 123456789;

  unsigned int hitung = 500;
  unsigned long jarak = 500000;

  printf("umur kita adalah: %d\n", umur);
  printf("temperatur ruangan adalah: %hd derajat c\n", temperatur);
  printf("populasi kota wakanda: %ld juta jiwa\n", populasi);
  printf("total korupsi negara wakanda: %lld T\n", angka_gede);
  printf("hitungan sudah ke- %u\n", hitung);
  printf("jarak kota wakanda adalah: %lu km\n", jarak);

  return 0;
}
