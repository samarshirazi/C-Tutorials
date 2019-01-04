#include<stdio.h>

int main (){
    int number  = 19;
    int first = number / 10;
    int second = number % 10;

    first =  (first + 1) % 10;
    second = (second + 1) % 10;

    int ans = first * 10 + second;

    printf("incremented number is %d", ans);
    return 0;
}
