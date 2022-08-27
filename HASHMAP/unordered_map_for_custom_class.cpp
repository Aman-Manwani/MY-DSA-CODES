#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string firstname;
    string lastname;
    string rollno;
    student(string s1,string s2,string s3)
    {
        firstname=s1;
        lastname=s2;
        rollno=s3;
    }
    bool operator==(const student &s) const
    {
        return rollno==s.rollno;
    }
};
class hashfunc
{
    public:
    size_t operator ()(const student &s) const
    {
        return s.firstname.length()+s.lastname.length();
    }
};
int main ()
{
    unordered_map<student,int,hashfunc>student_map;
    student s1={"aman","manwani","012"};
    student s2={"vasu","devrani","024"};
    student s3={"ankit","prakash","067"};
    student s4={"piyush","aryan","104"};
    
    student_map[s1]=67;
    student_map[s2]=45;
    student_map[s3]=89;
    student_map[s4]=59;

    for(auto s:student_map)
    {
        cout<<s.first.firstname<<" "<<s.first.rollno<<" "<<s.second<<endl;
    }
    return 0;
}  