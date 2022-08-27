#include <iostream>
using namespace std;
void search(int A[],int x,int n)
{
    int i,cmp=0;
    for(i=0;i<x;i++)
    {
        if(A[i]==n)
        {
            cmp=1;
            break;
        }
    }
    if(cmp==1)
        cout<<"element found";
    else
        cout<<"elemnet not found";
}

int main()
{
    int i,A[50],num,size;
    cout<<"enter number of elements=";
    cin>>size;
    cout<<"\nenter numbers for array=";
    for(i=0;i<size;i++)
    {
        cin>>A[i];
    }
    cout<<"enter the number you want to find in the array";
    cin>>num;
    search(A,size,num);
    return 0;
}