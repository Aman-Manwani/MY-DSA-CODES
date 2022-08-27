#include<bits/stdc++.h>
using namespace std;
class students
{
    public:
    int marks;
    string name;
};
void bucket_sort(students s[],int n)
{
    vector<students>v[101];
    for(int i=0;i<n;i++)
    {
        int mark=s[i].marks;
        v[mark].push_back(s[i]);   
    }
    for(int i=100;i>=0;i--)
    {
        for(auto it:v[i])
        {
            cout<<(it).marks<<" "<<(it).name<<endl;
        }
    }
}
int main ()
{
    int n;
    cin>>n;
    students s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i].marks>>s[i].name;
    }
    bucket_sort(s,n);
    return 0;
}