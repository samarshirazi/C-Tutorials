#include<stdio.h>


int main(){

    int marks = 88;


    if ( marks >= 85){
        printf("A");
    }else if( marks >= 80){
        printf("A-");
    }else if( marks >= 75){
        printf("B");
    }else if( marks >= 70){
        printf("C");
    }else{
        printf("F");
    }



    return 0;
}
