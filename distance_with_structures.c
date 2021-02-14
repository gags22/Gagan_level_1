//WAP to find the distance between two points using structures and 4 functions.
# include<stdio.h>
# include<math.h>
struct distance
{
    float x1;
    float x2;
    float y1;
    float y2;
    float d1;
};
void display_distance(struct distance d);
float main()
{
    struct distance d;
    printf("Enter x coordinates:\n");
    scanf("%f%f",&d.x1,&d.x2);
    printf("Enter y coordinates:\n");
    scanf("%f%f",&d.y1,&d.y2);
   
    display_distance(d);
    return 0;
    
}
void display_distance(struct distance d)
{
    d.d1 = sqrt((d.x2-d.x1)*(d.x2-d.x1)+(d.y2-d.y1)*(d.y2-d.y1));
    printf("Distance bewteen two numbers is %f",d.d1);
    
}
