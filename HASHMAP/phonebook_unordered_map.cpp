#include<bits/stdc++.h>
using namespace std;
int main ()
{
    unordered_map<string,vector<string>>phonebook;
    phonebook["vasu"].push_back("11");
    phonebook["vasu"].push_back("543");
    phonebook["vasu"].push_back("245");
    phonebook["vasu"].push_back("98");
    phonebook["piyush"].push_back("67");
    phonebook["piyush"].push_back("765");
    phonebook["piyush"].push_back("234");
    phonebook["piyush"].push_back("876");
    phonebook["piyush"].push_back("12");

    for(auto p:phonebook)
    {
        cout<<p.first<<"\t";
        for(auto s:p.second)
        {
            cout<<s<<" ";
        }
        cout<<endl;
    }
    return 0;
}