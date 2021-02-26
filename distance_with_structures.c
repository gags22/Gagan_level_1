//WAP to find the distance between two points using structures and 4 functions.
# include<stdio.h>
# include<math.h>
struct distance
{
    float x1;
    float y1;
    float x2;
    float y2;
    float d1;
    float n;
   
};
void display(struct distance d);
float get_input(char a)
{
    struct distance d;
    printf("Enter value of %c:\n",a);
    scanf("%f",&d.n);
    return d.n;
}
float find_dist(float x1,float y1,float x2,float y2)
{
    d.d1 = sqrt((d.x2-d.x1)*(d.x2-d.x1)+(d.y2-d.y1)*(d.y2-d.y1));
    return d.d1;
}
void display_distance( )
{
  printf("Distance between two points is %f",d.d1);
}
float main()
{
    float x,y,z,v,w;
    struct distance d;
    x = get_input('x');
    y = get_input('y');
    z = get_input('x');
    v = get_input('y');
    w = find_dist(x,y,z,v);
    display_distance(w);
    return 0;
}

