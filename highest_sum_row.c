#include "stdio.h"
int main()
{
    int i,j,r,c,highest_row,row_sum=0,s=0;
    printf("Enter row\n");
    scanf("%d",&r);
    printf("Enter column\n");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter element\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            s+=arr[i][j];
        }
    if(s>row_sum)
    {
        row_sum=s;
        highest_row=i;
    }
    s=0;
    }
    printf("Row with highest sum is %d",highest_row+1);
}