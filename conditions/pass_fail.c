#include<stdio.h>


int main(){
    char gender = 'f';
    int marks = 50;

    if( gender == 'm'){

        if( marks > 75){

            printf("Pass");

        }else{
            printf("Fail");
        }

    }else{

        if( marks > 35){
            printf("Pass");
        }else{
            printf("Fail");
        }

    }


    return 0;
}
