#include <stdio.h>

int rekursif(int x){
    printf("%d ", x);
    if (x > 0){ // --> Recursive Case (kondisi yang apabila bernilai true akan memanggil dirinya sendiri)
        return rekursif(x - 1); 
    }else{ // --> Base Case (kondisi yang apabila bernilai true akan mengentikan rekursi)
        return;
    }
}

int main(){
    int y = rekursif(10);
}