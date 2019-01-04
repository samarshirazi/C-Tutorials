#include<stdio.h>

int main(){
    int seat_number = 0;

    int left = (seat_number + 1 ) % 6;
    int right = (seat_number + 5) % 6;


    printf("left = %d and right = %d", left, right);
    return 0;
}
