// tipedata nama_variabel[ukuran]
// int angka[5];
#include <stdio.h>

int main() {
  // int angka[5] = {10, 20, 30, 40, 50};
  // printf("elemen ke 2 adalah %d\n", angka[2]);

  // for (int i = 0; i < 5; i++) {
  //   printf("element ke %d adalah nilanya: %d\n", i, angka[i]);
  // }
  // int array_pertama[3] = {1, 2, 3};
  // int array_kedua[3];
  //
  // array_kedua[0] = 4;
  // array_kedua[1] = 5;
  // array_kedua[2] = 6;
  //
  // printf("tampilin array pertama:\n");
  // for (int i = 0; i < 3; i++) {
  //   printf("array_pertama[%d] adalah: %d\n", i, array_pertama[i]);
  // }
  //
  // printf("\ntampilin array kedua:\n");
  // for (int i = 0; i < 3; i++) {
  //   printf("array_kedua[%d] adalah: %d\n", i, array_kedua[i]);
  // }

  int matriks[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  printf("elemen-elemen yang terdapat pada matriks\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matriks[i][j]);
    }
    printf("\n");
  }

  return 0;
}
