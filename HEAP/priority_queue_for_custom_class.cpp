#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
    string name;
    int age;
    person(string s,int n)
    {
        name=s;
        age=n;
    }
};
class person_compare
{
    public:
    bool operator()(person a,person b)
    {
        return a.age<b.age;
    }
};
int main ()
{
    int n;
    cin>>n;
    priority_queue<person,vector<person>,person_compare>pq;//here person compare is the functor (function object); which helps to compare two persons
    for(int i=0;i<n;i++)
    {
        string name;
        int age;
        cin>>name>>age;
        person p(name,age);
        pq.push(p);
    }
    // if we want to get the first 3 persons
    int k=3;
    while(k--)
    {
        person p=pq.top();
        cout<<p.name<<" "<<p.age<<endl;
        pq.pop();
    }
    return 0;
}