


#include<stdio.h>

int main()
{
int num1, num2;
int sum, product, num1_and_num2;
float f1, f2, fadd, fmul;

printf("Please enter two numbers in decimal format:\n");
scanf("%d %d", &num1, &num2);

sum=num1 + num2;
product=num1 * num2;

printf("The three decimal numbers: %d %d %d\n", num1, num2, sum);
printf("The three hexadecimal numbers: 0%x 0%x 0%x\n", num1, num2, sum);
printf("The result for the sum is:%d\n",sum);
printf("The result for the product is:%d\n",product);
 
printf("Please enter two Floading numbers:\n");
scanf("%f %f", &f1, &f2);

fmul= f1*f2;

printf("The result for the product of the floating numbers is:%f\n", fmul);

return 0;
}













