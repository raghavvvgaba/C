#include<stdio.h>
void print(int x,int n)
{
    if(x==n)
    printf("%d",n);
    else{
        printf("%d ",x);
        print(x+1,n);
    }
}
int main()
{
    int n=10;
    print(1,n);
}