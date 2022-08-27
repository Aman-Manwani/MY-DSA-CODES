#include<bits/stdc++.h>
using namespace std;
class minmaxstack
{
    vector<int>stack;
    vector<int>min_stack;
    vector<int>max_stack;
    public:
    void push(int data)
    {
        int current_min=data;
        int current_max=data;
        if(stack.size())
        {
            current_min=min(min_stack[min_stack.size()-1],data);
            current_max=max(min_stack[min_stack.size()-1],data);
        }
        min_stack.push_back(current_min);
        max_stack.push_back(current_max);
        stack.push_back(data);
    }
    int get_min()
    {
        return min_stack[min_stack.size()-1];
    }
    int get_max()
    {
        return max_stack[max_stack.size()-1];
    }
    int top()
    {
        return stack[stack.size()-1];
    }
    void pop()
    {
        if(!stack.empty())
        {
            stack.pop_back();
            min_stack.pop_back();
            max_stack.pop_back();
        }
    }
    bool empty()
    {
        if(stack.size()==0)
        {
            return true;
        }
        return false;
    }
}; 
int main ()
{
    minmaxstack s;
    s.push(1);
    s.push(5);
    s.push(3);
    s.push(8);

    cout<<s.get_max()<<endl;
    s.pop();
    cout<<s.get_min()<<endl;
    cout<<s.get_max()<<endl;
    
    s.pop();
    s.pop();

    cout<<s.top()<<endl;
    cout<<s.get_max()<<endl;
    return 0;
}