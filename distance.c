//WAP to find the distance between two point using 4 functions.

# include<stdio.h>
# include<math.h>
float get_num(char b)
{
    float num;
    printf("Enter value of %c:\n",b);
    scanf("%f",&num);
    return num;
}
float find_distance(float x1,float y1,float x2,float y2)
{
    float distance;
    distance = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    return distance;
}
void print_distance(float s)
{
    printf("The distance between two points is %f",s);
}
float main()
{
    float x,y,z,v,w;
    x = get_num('x');
    y = get_num('y');
    z = get_num('x');
    v = get_num('y');
    w = find_distance(x,y,z,v);
    print_distance(w);
    return 0;
}
