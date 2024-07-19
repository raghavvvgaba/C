#include <stdio.h>
int power(int a,int b)
{
    int p=1;
    if(b==1)
    p=a;
    else
    p*=a*power(a,b-1);
}
int main()
{
    int n=5;
    printf("%d",power(n,3));
    return 1;
}
