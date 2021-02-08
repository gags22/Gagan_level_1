//Write a program to add two user input numbers using 4 functions.

# include<stdio.h>
float get_num (void)
{
    float num;
    printf("Enter a number:\n");
    scanf("%f",&num);
    return num;
}
float add_num (float num1,float num2)
{
    float sum = 0;
    sum = num1 + num2;
    return sum;
    
}
float print_sum (float num1,float num2,float num3)
{
    printf("Sum of %f + %f is %f",num1,num2,num3);
    return 0;
    
}
float main()
{
    float x,y,z;
    x = get_num();
    y = get_num();
    z = add_num(x,y);
    print_sum(x,y,z);
    return 0;
}
