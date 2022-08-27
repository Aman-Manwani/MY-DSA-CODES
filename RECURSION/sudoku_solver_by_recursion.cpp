#include<bits/stdc++.h>
using namespace std;
bool we_can_put(int matrix[][9],int i,int j,int n,int number)
{
    for(int x=1;x<=n;x++)
    {
        if(matrix[x][j]==number ||matrix[i][x]==number)
        {
            return false;
        }
    }
    return true;
    int sms=sqrt(n);
    int ssmi=(i/sms)*sms;
    int ssmj=(j/sms)*sms;
    for(int x=ssmi;x<ssmi+sms;x++)
    {
        for(int y=ssmj;y<ssmj+sms;y++)
        {
            if(matrix[x][y]==number)
            {
                return false;
            }
        }
    }
    return true;

}
bool sudoku_solve(int matrix[][9],int i,int j,int n)
{
    //base case
    if(i==n)
    {
        //print the solution;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
        return true;
    }
    if(j==n)
    {
        return sudoku_solve(matrix,i+1,0,n);
    }
    if(matrix[i][j]!=0)
    {
        return sudoku_solve(matrix,i,j+1,n);
    }
    //rec case
    for(int number=1;number<=n;number++)
    {
        if(we_can_put(matrix,i,j,n,number))
        {
            matrix[i][j]=number;
        }
        bool could_we_solve=sudoku_solve(matrix,i,j+1,n);
        if(could_we_solve==true)
        {
            return true;
        }    
    }
    // backtracking step
    matrix[i][j]=0;
    return false;
}
int main ()
{
    int matrix[9][9]={
                     {5,3,0,0,7,0,0,0,0},
                     {6,0,0,1,9,5,0,0,0},
                     {0,9,8,0,0,0,0,6,0},
                     {8,0,0,0,6,0,0,0,3},
                     {4,0,0,8,0,3,0,0,1},
                     {7,0,0,0,2,0,0,0,6},
                     {0,6,0,0,0,0,2,8,0},
                     {0,0,0,4,1,9,0,0,5},
                     {0,0,0,0,8,0,0,7,9}
    };
    sudoku_solve(matrix,0,0,9);
    return 0;
}