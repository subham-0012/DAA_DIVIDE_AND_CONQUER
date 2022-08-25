#include<stdio.h>
#include<stdlib.h>
int max=0,min=0;
void maxmin(int arr[],int low,int high)
{
    int max1,min1,mid;
    if(low==high)
    {
        max=min=arr[low];
    }
    else if(low==high-1)
    {
        if(arr[low]<arr[high])
        {
            max=arr[high];
            min=arr[low];
        }
        else
        {
            max=arr[low];
            min=arr[high];
        }
    }
    else
    {
        mid=(low+high)/2;
        maxmin(arr,low,mid);
        max1=max;
        min1=min;
        maxmin(arr,mid+1,high);
        if(max1>max)
        {
            max=max1;
        }
        if(min>min1)
        {
            min=min1;
        }
    }
}
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    maxmin(arr,0,size-1);
    printf("the max is %d and min is %d",max,min);
}