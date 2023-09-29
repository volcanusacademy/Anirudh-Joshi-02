#include<stdio.h>
void main ()
{
    int arr[50],i,num;
    printf("enter  number of subjects marks u want to record : ");
    scanf("%d",&num);

    for ( i = 1; i <= num; i++)
    {
        printf("\nenter the marks of %d subject :", i);
        scanf("%d",&arr[i]);
    }
    for(i=1; i<= num ; i++)
    {
        printf("%d\t",arr[i]);
    }
    
}