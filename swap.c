#include <stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=2,b=5;
    swap(&a,&b);
    printf("The value of a is %d\n",a);
    printf("The value of b is %d\n",b);
}