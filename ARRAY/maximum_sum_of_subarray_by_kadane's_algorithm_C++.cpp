#include <iostream>
using namespace std;
int main()
{
    int n,cs=0,ms=0,arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        cs=cs+arr[i];
        if(cs<0)
        {
            cs=0;
        }
        ms=max(cs,ms);
    }
    cout<<"maximum sum of subarray="<<ms;
    return 0;
}
