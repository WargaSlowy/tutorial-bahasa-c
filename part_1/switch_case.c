// switch (ekspesi) {
//  case nilai:
//    ...
//    break;
//  case berikutnya:
//   ...
//   break;
//  default:
//    ...
// }
#include <stdio.h>

int main() {
  // int hari;
  // printf("masukkan angka (1-3): ");
  // scanf("%d", &hari);
  //
  // switch (hari) {
  // case 1:
  //   printf("ini hari senin\n");
  //   break;
  // case 2:
  //   printf("ini hari selasa\n");
  //   break;
  // case 3:
  //   printf("ini hari kamis\n");
  //   break;
  // default:
  //   printf("hey tidak ada nilai yang valid\n");
  // }

  int pilihan_menu;

  printf("menu makanan\n");
  printf("1. lobster\n");
  printf("2. ikan gurame\n");
  printf("3. cah kangukung\n");
  printf("pilih opsi (1-3): ");
  scanf("%d", &pilihan_menu);

  switch (pilihan_menu) {
  case 1:
    printf("kamu memilih lobster\n");
    break;
  case 2:
    printf("kamu memilih ikan gurame\n");
    break;
  case 3:
    printf("kamu memilih cah kangukung\n");
    break;
  default:
    printf("tidak ada pilihan yang tepat\n");
  }

  return 0;
}
