//WAP to find the volume of a tromboloid using 4 functions.
# include<stdio.h>
float get_num(char a)
{
    float number;
    printf("Enter value of :\n",a);
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
    x = get_num('h');
    y = get_num('d');
    z = get_num('b');
    v = find_volume(x,y,z);
    print_volume(v);
    return 0;
}
