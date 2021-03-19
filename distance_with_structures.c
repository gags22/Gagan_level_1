//WAP to find the distance between two points using structures and 4 functions.
#include <stdio.h>
#include <math.h>
typedef struct coordinate
{
float x,y;
};
typedef struct coordinate coordinate;
coordinate get_input()
{
 coordinate c;
printf("Enter the value of x and y coordinates:\n");
scanf("%f%f",&c.x,&c.y);
return c;
}
float compute_distance(coordinate c1,coordinate c2)
{
float distance;
distance = sqrt((c1.x - c2.x)*(c1.x - c2.x) + (c1.y - c2.y)*(c1.y-c2.y));
return distance;
}
void compute_output(coordinate c1,coordinate c2,float distance)
{
printf("The distance between %f ,%f and %f,%f is %f ",c1.x,c2.y,c1.x,c2.y,distance);
}
int main(void)
{
float distance;
coordinate c1,c2;
c1 = get_input();
c2 = get_input();
distance = compute_distance(c1,c2);
compute_output(c1,c2,distance);
return 0;
}
 

