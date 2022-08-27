#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4][4]={1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6};
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<"   ";
        }
        cout<<endl;
    }
    for(int i=0;i<4;i++)
    {
        reverse(arr[i],arr[i]+4);
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i<j)
            {
                swap(arr[i][j],arr[j][i]);
            }
        }
    }
    cout<<"\n\n";
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<"   ";
        }
        cout<<endl;
    }
    return 0;
}
