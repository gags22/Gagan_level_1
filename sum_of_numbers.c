//Write a program to find the sum of n different numbers using 4 functions
#include <stdio.h>
int get_input()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    return num;
}

void intput_array(int n, int a[n])
{
    for(int i=0;i<n;i++){
        printf("Enter the element no %d of the array\n",i);
        scanf("%d",&a[i]);
    }
}

int find_sum(int n, int a[n])
{
    int sum=0;
    for(int i=0;i<n;i++) {
        sum += a[i];
    }
    return sum;
}

int output(int n, int a[n], int sum)
{
    int i;
    printf("The sum of n numbers is %d",i);
    for(i=0;i<n-1;i++) {
        printf("%d+",a[i]);
    }
    printf("%d",sum);
}

int main()
{
    int n,sum;
    n = get_input();
    
    input_array(n,a);
    sum=find_sum(n,a);
    output(n,a,sum);
}
    
