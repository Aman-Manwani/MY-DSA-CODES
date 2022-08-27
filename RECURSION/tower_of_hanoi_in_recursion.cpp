#include<bits/stdc++.h>
using namespace std;
void ans(int discs,char start,char helper,char end)
{
    if(discs==0)
    {
        return;
    }
    ans(discs-1,start,end,helper);
    cout<<"disc "<<discs<<" move from "<<start<<" to "<<end<<endl;
    ans(discs-1,helper,start,end);
}
int main ()
{
    int discs;
    cin>>discs;
    ans(discs,'A','B','C');
    return 0;
}