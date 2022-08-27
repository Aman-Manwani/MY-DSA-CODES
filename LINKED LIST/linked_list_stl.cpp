#include<bits/stdc++.h>
using namespace std;
int main ()
{
    // /creation of list of integer
    list<int>l{1,2,3,4,5,6};
    // list of strings
    list<string>l2{"apple","mango","guava","banana"};
    l2.push_back("pineapple");

    //sort
    l2.sort();

    //reverse
    l2.reverse();


    //pop.front
    cout<<l2.front()<<endl;
    l2.pop_front();

    //add to the front from the list
    l2.push_front("kiwi");
    cout<<l2.back()<<endl;
    l2.pop_back();

    //iterate with the help of iterators
    for(auto it=l2.begin();it!=l2.end();it++)
    {
        cout<<(*it)<<"->";
    }
    cout<<endl;

    for(auto it:l2)
    {
        cout<<it<<"->";
    }
    cout<<endl;

    //some more elements in the list
    l2.push_back("orange");
    l2.push_back("lemon");
    for(auto it:l2)
    {
        cout<<(it)<<"->";
    }    
    cout<<endl;

    //remove a fruit by name   remove function removes all the accurences of this name
    string f="guava";
    l2.remove(f);

    for(auto it:l2)
    {
        cout<<(it)<<"->";
    }
    cout<<endl;

    //erase one or more elements
    auto it=l2.begin();
    it++;
    it++;
    l2.erase(it);

    for(auto it:l2)
    {
        cout<<(it)<<"->";
    }
    cout<<endl;

    //insertion of elements in the middle
    it=l2.begin();
    it++;
    l2.insert(it,"fruitjuice");

    for(auto it:l2)
    {
        cout<<(it)<<"->";
    }
    cout<<endl;

    return 0;
}