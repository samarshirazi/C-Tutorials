#include<stdio.h>

int main(){

    int mohsin = 149;
    int atif = 160;

    printf("Mohsin = %d, Atif = %d\n", mohsin, atif);
    int temp = mohsin;
    mohsin = atif;
    atif = temp;

    printf("Mohsin = %d, Atif = %d", mohsin, atif);

    return 0;
}
