#include<stdio.h>
#include<conio.h>
int main ()
{
    int i,j,arr[50],size,x,first,second,mid;
    printf("enter number of values=");
    scanf("%d",&size);
    printf("enter %d value for array=",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the number you want to find in the array=");
    scanf("%d",&x);
    first=0;
    second=size-1;
    while(first<=second)
    {
        mid=(first+second)/2;
        if(arr[mid]==x)
        {
            printf("element present at location %d",mid+1);
            break;
        }
        else if(arr[mid]<x)
            first=mid+1;
        else 
        second=mid-1;
        mid=(first+second)/2;
    }
    if(first>second)
    {
        printf("%d element not found",x);    
    }
    return 0;
}
