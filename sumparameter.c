#include <stdio.h>
void sum(int n,int s)
{
    if(n==0){
    printf("%d",s); return;}
    else
    sum(n-1,s+n);
}
int main()
{
    int n=5;
    sum(n,0);
    return 1;
}