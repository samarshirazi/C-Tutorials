#include<stdio.h>


int main(){

    char gender = 'f';
    int marks = 5;

    if( gender == 'm' && marks > 75){
        printf("Pass");
    }else if (gender != 'm' && marks > 35){
        printf("Pass");
    }else{
        printf("Fail");
    }

    return 0;
}
