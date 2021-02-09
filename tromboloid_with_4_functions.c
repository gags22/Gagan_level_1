//WAP to find the volume of a tromboloid using 4 functions.
# include<stdio.h>
float get_num(void)
{
    float number;
    printf("Enter value of h,d and b:\n");
    scanf("%f",&number);
    return number;
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
    y = get_num();
    z = get_num();
    v = find_volume(x,y,z);
    print_volume(v);
    return 0;
}
