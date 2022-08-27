#include<bits/stdc++.h>
using namespace std;
bool rat_in_a_maze(char maze[10][10],int sol[][10],int i,int j,int m,int n)
{
    //base case
    int count=0;
    if(i==m && j==n)
    {
        sol[i][j]=1;
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return true;
    }
    if(i>m || j>n)
    {
        return false;
    }
    if(maze[i][i]=='X')
    {
        return false;
    }
    sol[i][j]=1;
    //rec case
    bool rightsuccess=rat_in_a_maze(maze,sol,i,j+1,m,n);
    bool downsuccess=rat_in_a_maze(maze,sol,i+1,j,m,n);
    //backtracking step in problem
    sol[i][j]=0;
    if(rightsuccess || downsuccess)
    {
        return true;
    }
    return false;
}
int main ()
{
    char maze[10][10]={"0000",
                       "00X0",
                       "000X",
                       "0X00",
    };
    int sol[10][10]={0};
    bool ans=rat_in_a_maze(maze,sol,0,0,3,3);
    if(ans==false)
    {
        cout<<"solution not found"<<endl;
    }
    return 0;
}