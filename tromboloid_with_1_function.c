//Write a program to find the volume of a tromboloid using one function
# include<stdio.h>
int main()
{
    float h,d,b,v;
    printf("Enter value of h:");
    scanf("%f",&h);
    printf("Enter value of d:");
    scanf("%f",&d);
    printf("Enter value of b:");
    scanf("%f",&b);
    v = 0.333*((h*d*b)+(d/b));
    printf("Volume of tromboloid is %f",v);
}
