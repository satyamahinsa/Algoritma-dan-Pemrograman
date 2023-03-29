#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int banyak_huruf[100];
char huruf_kecil[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
char huruf_kapital[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

int main(){
  char kalimat[100];
  scanf("%[^\n]%*c", &kalimat);
  
  for(int i = 0; i < strlen(kalimat); i++){
    for(int j = 0; j < 26; j++) {
      if(kalimat[i] == huruf_kecil[j] || kalimat[i] == huruf_kapital[j]){
        banyak_huruf[j]++;
      }
    }
  }

  for(int i = 0; i < 26; i++){
    if(banyak_huruf[i] != 0){
      printf("%c : %d\n", huruf_kecil[i], banyak_huruf[i]);
    }
  }

  return 0;
}