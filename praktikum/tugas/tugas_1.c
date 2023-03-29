#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    // deklarasi variabel yang dibutuhkan
    int harga_sebelum_diskon = 100000, harga_setelah_diskon;
    double n, result;
    
    // input user (besar persentase diskon)
    scanf("%lf", &n);

    // operasi perhitungan untuk mendapatkan persentase kenaikan harga barang
    harga_setelah_diskon = harga_sebelum_diskon * ((100-n)/100);
    result = ((harga_sebelum_diskon - harga_setelah_diskon) / harga_setelah_diskon) * 100;
  
    // output (persentase kenaikan harga barang)
    printf("%.2lf", result);
    
    return 0;
}