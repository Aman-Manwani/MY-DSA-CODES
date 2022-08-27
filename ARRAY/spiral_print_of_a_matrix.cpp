#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int arr[3][5]={3,5,6,3,2,7,9,8,0,5,4,3,4,8,1};
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<5;col++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    int startrow=0;
    int startcol=0;
    int endrow=2;
    int endcol=4;
    while(startrow<=endrow and startcol<=endcol)
    {
        for(int i=startcol;i<=endcol;i++)
        {
            cout<<arr[startrow][i]<<" ";
        }
        startrow++;
        for(int i=startrow;i<=endrow;i++)
        {
            cout<<arr[i][endcol]<<" ";
        }
        endcol--;
        if(endrow>startrow)
        {
            for(int i=endcol;i>=startcol;i--)
            {
                cout<<arr[endrow][i]<<" "; 
            }
            endrow--;
        }
        if(endcol>startcol)
        {
            for(int i=endrow;i>=startrow;i--)
            {
                cout<<arr[i][startcol]<<" ";
            }
            startcol++;    
        }
    }
    return 0;
}