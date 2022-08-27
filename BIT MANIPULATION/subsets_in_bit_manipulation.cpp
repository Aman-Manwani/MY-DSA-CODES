#include<bits/stdc++.h>
using namespace std;
int main ()
{
    char arr[1000];
    cin>>arr;
    int n=strlen(arr);
    cout<<n<<endl;
    for(int i=0;i<pow(2,n);i++)
    {
        int cmp=i;
        int j=0;
        while(cmp>0)
        {
            int last_bit=(cmp&1);
            if(last_bit==1)
            {
                cout<<arr[j];
            }
            j++;
            cmp=cmp>>1;
        }
        cout<<endl;
    }
    return 0;
}