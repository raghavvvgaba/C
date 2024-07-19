#include <stdio.h>
int sum(int n)
{
    int s;
    if(n==1)
    s=1;
    else
    s=n+sum(n-1);
    return s;
}
int main()
{
    int n=5;
    printf("%d",sum(n));
    return 1;
}