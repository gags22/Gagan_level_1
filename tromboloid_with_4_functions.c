//WAP to find the volume of a tromboloid using 4 functions.
# include<stdio.h>
float get_num(void)
{
    float h;
    printf("Enter h:\n ");
    scanf("%f",&h);
}
float get_num1(void)
{
    float d;
    printf("Enter d:\n");
    scanf("%f",&d);
}
float get_num2(void)
{
    float b;
    printf("enter b:\n");
    scanf("%f",&b);
}
float find_volume(float h1,float d1,float b1)
{
    float volume;
    volume = 0.333*((h1*d1*b1)+(d1/b1));
    return volume;
}
void print_volume(float a1)
{
    printf("volume of tromloid is %f",a1);
}
float main()
{
    float x,y,z,v;
    x = get_num();
    y = get_num1();
    z = get_num2();
    v = find_volume(x,y,z);
    print_volume(v);
    return 0;
}
