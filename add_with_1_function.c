//Write a program to add two user input numbers using one function.
#include<stdio.h>
int main()
{
 float number1,number2,c = 0;
printf("Enter number1:");
scanf("%f",&number1);
printf("Enter number2:");
scanf("%f",&number2);
c = number1+number2;
printf("sum of %f and %f is %f",number1,number2,c);
return 0;
}
