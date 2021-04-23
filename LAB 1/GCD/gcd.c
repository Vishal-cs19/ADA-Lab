#include<stdio.h>
int main()
{
    int num1, num2, gcd;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    gcd = r_gcd(num1, num2);
    printf("GCD of %d and %d = %d",num1,num2,gcd);
    return 0;
}

int r_gcd(int m, int n)
{
    if(n==0)
    return m;
    else
    return r_gcd(n, m%n);
}
