#include<stdio.h>
void recur(int n)
{
    printf("%d\n",n);

    if(n==1){
        printf("%d\n",n);
        return ;}
    else {
        recur(n-1);
        printf("%d\n",n);
        return;
    }
}
int main()
{
    int n=4;
    recur(n);
}