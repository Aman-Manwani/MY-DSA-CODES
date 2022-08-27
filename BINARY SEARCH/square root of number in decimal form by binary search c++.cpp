#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0;
    int j=n;
    long long int mid;
    float ans;
    while(i<=j)
    {
        mid=(i+j)/2;
        if(mid*mid==n)
        {
            ans=mid;
            break;
        }else
        if(mid*mid>n)
        {
            j=mid-1;
        }else
        if(mid*mid<n)
        {
            i=mid+1;
            ans=mid;
        }
    }
    float inc=0.1;
    for(int times=1;times<4;times++)
    {
        while(ans*ans<=n)
        {
            ans=ans+inc;
        }
        ans=ans-inc;
        inc=inc/10;
    }
    cout<<ans<<endl;
    return 0;
}
