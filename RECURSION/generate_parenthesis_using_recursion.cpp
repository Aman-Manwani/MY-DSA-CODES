#include<bits/stdc++.h>
using namespace std;
void generate_parenthesis(char *out,int index,int n,int open,int close)
{
    //base case
    if(index==2*n)
    {
        out[index]='\0';
        cout<<out<<endl;
        return;
    }
    //rec case
    if(open<n)
    {
        out[index]='(';
        generate_parenthesis(out,index+1,n,open+1,close);
    }
    if(close<open)
    {
        out[index]=')';
        generate_parenthesis(out,index+1,n,open,close+1);
    }
    return;
}
int main ()
{
    int n;
    cin>>n;
    char out[1000];
    int idx=0;
    generate_parenthesis(out,0,n,0,0);
    return 0;
}