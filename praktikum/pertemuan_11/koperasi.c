#include <stdio.h>
#include <conio.h>

typedef struct {
  char nama[100];
  int harga;
} koperasi;

int data = 0;

void inputData(koperasi *produk) {
  char input;
  do {
    printf("=============================\n");
    printf("  Input Data Koperasi ITTS   \n");
    printf("=============================\n");
    printf("Masukkan Nama Produk : ");
    fflush(stdin);
    scanf("%[^\n]%*c", &produk[data].nama);
    printf("Masukkan Harga Produk : ");
    scanf("%d", &produk[data].harga);
    data++;
    printf("Apakah ingin input data lagi? (y/n): ");
    scanf("%s", &input);
  } while(input != 'n');
}

void dataProduk(koperasi *produk) {
  printf("=============================\n");
  printf("      Data Koperasi ITTS     \n");
  printf("=============================\n");
  for(int i = 0; i < data; i++) {
    printf("Nama Produk : %s\n", produk[i].nama);
    printf("Harga Produk : %d\n", produk[i].harga);
  }
  getch();
}

void searchingProduk(koperasi *produk) {
  printf("=============================\n");
  printf(" Searching Data Koperasi ITTS\n");
  printf("=============================\n");
  int input_harga;
  printf("Masukkan harga produk : ");
  scanf("%d", &input_harga);
  printf("\n");
  for(int i = 0; i < data; i++) {
    if(produk[i].harga >= input_harga) {
      printf("Nama Produk : %s\n", produk[i].nama);
      printf("Harga Produk : %d\n", produk[i].harga);
    }
  }
  getch();
}

void sortingProdukAscending(koperasi *produk) {
  printf("=============================\n");
  printf(" Sorting Data Koperasi ITTS  \n");
  printf("=============================\n");
  for(int i = 0; i < data - 1; i++) {
    koperasi temp;
    for(int j = 0; j < data - 1 - i; j++) {
      if(produk[j].harga > produk[j + 1].harga) {
        temp = produk[j];
        produk[j] = produk[j + 1];
        produk[j + 1] = temp;
      }
    }
  }
  for(int i = 0; i < data; i++) {
    printf("Nama Produk : %s\n", produk[i].nama);
    printf("Harga Produk : %d\n", produk[i].harga);
  }
  getch();
}

int main() {
  int input;
  do {
    printf("=============================\n");
    printf("        Koperasi ITTS        \n");
    printf("=============================\n");
    printf("1. Input Data Koperasi\n");
    printf("2. Data Koperasi\n");
    printf("3. Searching Data Koperasi\n");
    printf("4. Sorting Data Koperasi (Ascending)\n");
    printf("5. Keluar\n");
    printf("Masukkan pilihan : ");
    scanf("%d", &input);
    koperasi produk[100];
    switch (input) {
      case 1:
        inputData(produk);
        break;
      case 2:
        dataProduk(produk);
        break;
      case 3:
        searchingProduk(produk);
        break;
      case 4:
        sortingProdukAscending(produk);
        break;
    }
  } while(input != 5);
  
  return 0;
} 