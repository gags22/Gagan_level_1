//WAP to find the sum of two fractions.
# include<stdio.h>
# include<stdlib.h>
int compute_gcd(int,int);
typedef struct 
{
    int num;
    int den;
}fract;
fract input()
{
    fract f;
    printf("Enter the numerator:\n");
    scanf("%d",&f.num);
    printf("Enter the denominator:\n");
    scanf("%d",&f.den);
    return f;
}
fract compute_add(fract f1,fract f2)
{
    int gcd;
    fract sum = {(f1.num * f2.den + f1.den * f2.num),(f1.den * f2.den)};
    gcd = compute_gcd(sum.num,sum.den);
    fract output = {(sum.num/gcd),(sum.den/gcd)};
    return output;
}
int compute_gcd(int x,int y)
{
    int i,gcd;
    for(i = 1 ;i<=x && i<=y ;i++)
    {
        if(x%i==0 && y%i==0)
        {
            gcd = i;
        }
    
    }
    return gcd;
}
void output(fract f1,fract f2,fract output)
{
    printf("The sum of %d/%d + %d/%d = %d/%d",f1.num,f1.den,f2.num,f2.den,output.num,output.den);
    
}
int main()
{
     fract f1,f2,answer;
    f1 = input();
    f2 = input();
    answer = compute_add(f1,f2);
    output(f1,f2,answer);
    return 0;
}

    




