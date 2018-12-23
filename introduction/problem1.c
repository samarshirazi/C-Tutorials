#include<stdio.h>

int main(){
    float basic_salary = 5000;
    float dearness = basic_salary * 40 / 100;
    float rent = basic_salary * 20 / 100;

    float gross = basic_salary + dearness + rent;

    printf("Gross Salary is %f", gross);
    return 0;
}
