// program of simple 2D array
//getting value of array from user and print it  

#include<stdio.h>
void main()
{
    int i,j,arr[50][50],r,c;
    printf("enter rows and coloum of array : ");
    scanf("%d  %d",&r,&c);
    printf("enter the elements of array ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n array elements are : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }        
}