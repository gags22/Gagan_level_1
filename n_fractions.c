//WAP to find the sum of n fractions.
# include<stdio.h>
typedef struct 
{
    int num[100];
    int den[100];
    
}fract;

fract get_input()
{
    int n;
    fract f;
    printf("Enter the number of fractions:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the numerator:");
        scanf("%d",&f.num[i]);
        printf("Enter the denominator:");
        scanf("%d",&f.den[i]);
        return f;
    }
}
fract compute_add(fract f1,fract f2)
{
    int i;
   int gcd;
    fract sum = {(f1.num[i] * f2.den[i] + f1.den[i] * f2.num[i]),(f1.den[i] * f2.den[i])};
    gcd = compute_gcd(sum.num[i],sum.den[i]);
    fract output = {(sum.num[i]/gcd),(sum.den[i]/gcd)};
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
    printf("The sum of %d/%d + %d/%d = %d/%d",f1.num[i],f1.den[i],f2.num[i],f2.den[i],output.num[i],output.den[i]);
    
}
int main()
{
     fract f1,f2,answer;
    f1 = get_input();
    f2 = get_input();
    answer = compute_add(f1,f2);
    output(f1,f2,answer);
    return 0;
}
