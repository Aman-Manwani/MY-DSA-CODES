#include <iostream>
using namespace std;
int fact(int x)
{
    int c=1;
    if(x>=1)
    {
        return c=x*fact(x-1);
    }
    else
    return 1;
}
int main()
{
    int num;
    cout<<"enter the number for finding factorial=";
    cin>>num;
    cout<<"factorial="<<fact(num);
    return 0;
}
