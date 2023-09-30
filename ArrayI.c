#include<stdio.h>
void main()
{
    int arr[50],i,j,size;
    printf("enter the size of the array   ");
    scanf("%d",&size);
    printf("enter %d values in your array \n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int index,value;
    printf("enter the index number first then enter the vaalue u want to add in that sequence   = ");
    scanf("%d%d",&index,&value);
    for(i = size - 1; i>=index ; i-- )
    {
        arr[i+1] = arr[i];
    }
    /*for(i=0;i<size;i++)
    {
        if(i==index)
        {

            arr[i]= value;
            break;
        }
    }*/
    arr[index] = value ;
    size = size + 1;
    for(i=0;i<size;i++)
    {
        printf("\n%d",arr[i]);
    }

}