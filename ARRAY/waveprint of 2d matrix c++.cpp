#include <iostream>
using namespace std;
int main()
{
    int arr[3][5];
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<5;col++)
        {
            cin>>arr[row][col];
        }
    }
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<5;col++)
        {
            cout<<arr[row][col]<<"  ";
        }
        cout<<endl;
    }
    for(int col=0;col<5;col++)
    {
        if(col%2==0)
        {
            for(int row=0;row<3;row++)
            {
                cout<<arr[row][col]<<"  ";
            }
        }
        if(col%2==1)
        {
            for(int row=2;row>=0;row--)
            {
                cout<<arr[row][col]<<"  ";
            }
        }
    }
    return 0;
}
