#include<stdio.h>


int main(){

    char gender = 'm';
    int marks = 85;

    if( (gender == 'm' && marks > 75)  || (gender != 'm' && marks > 35)){
        printf("Pass");
    }else{
        printf("Fail");
    }

    return 0;
}
