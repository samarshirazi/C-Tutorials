#include <stdio.h>
int main()
{
   int a = 31, b = 15;
   int sum = a + b ;
   printf("sum of a=%d and b=%d is %d \n", a, b, sum);
   int sub = a - b ;
   printf("subtraction of a=%d and b=%d is %d \n", a, b, sub);

   int mul = a * b ;
   printf("product of a=%d and b=%d is %d \n", a, b, mul);

   int div_int = a / b ;
   printf("division of a=%d and b=%d is %d \n", a, b, div_int);

   float div_float = a / b ;
   printf("division of a=%d and b=%d is %f \n", a, b, div_float);

   float aa = 31;
   float div_float_int = aa / b ;
   printf("division of aa=%f and b=%d is %f \n", aa, b, div_float_int);

   float bb = 15;
   float div_int_float = a / bb ;
   printf("division of a=%d and bb=%f is %f \n", a, bb, div_int_float);

   int remainder = -7 % 10;
   printf("remainder of a=%d and b=%d is %d \n", a, b, remainder);


   return 0;
}
