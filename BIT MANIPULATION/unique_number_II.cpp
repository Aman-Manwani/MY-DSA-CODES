#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,no,ans=0,count=0,temp,num1=0,num2=0;
    cin>>n;
    vector<int> v(n,0);
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        cin>>no;
        v[i]=no;
        ans=ans^no;
    }
    temp=ans;
    while((ans&1)!=1)
    {
        count ++;
        ans=ans>>1;
    }
    int bin_num=1<<count;
    for(int i=0;i<n;i++)
    {
        if((v[i]&bin_num)>0)
        {
            a.push_back(v[i]);
        }
    }
    int new_size=a.size();
    for(int i=0;i<new_size;i++)
    {
        num1=num1^a[i];
    }
    num2=temp^num1;
    cout<<num1<<" "<<num2<<endl;
    return 0;
}