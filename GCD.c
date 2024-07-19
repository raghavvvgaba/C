#include <stdio.h>
int main()
{
    int a=50,b=20,gcd;
    if(a<b){
    for(int i=1;i<=a;i++)
    {
        if(a%i==0&&b%i==0)
        gcd=i;
    }
    }
    else
    {
        for(int i=1;i<=a;i++)
    {
        if(a%i==0&&b%i==0)
        gcd=i;
    }   
    }
    printf("GCD is %d",gcd);
}