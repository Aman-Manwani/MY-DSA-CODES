#include<bits/stdc++.h>
using namespace std;
void replace_pi(char arr[],int i)
{
    if(arr[i] =='\0' || arr[i+1] =='\0')
    {
        return;
    }
    if(arr[i]=='p' && arr[i+1]=='i')
    {
        int j=i+2;
        while(arr[j]!='\0')
        {
            j++;
        }
        while(j>=i+2)
        {
            arr[j+2]=arr[j];
            j--;
        }
        arr[i]='3';
        arr[i+1]='.';
        arr[i+2]='1';
        arr[i+3]='4';
        replace_pi(arr,i+4);
    }else
    {
        replace_pi(arr,i+1);
    }
}
int main ()
{
    char arr[100];
    cin>>arr;
    replace_pi(arr,0);
    cout<<arr<<endl;
    return 0;
}