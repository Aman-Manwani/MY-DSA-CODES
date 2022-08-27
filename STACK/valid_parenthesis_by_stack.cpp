#include<bits/stdc++.h>
using namespace std;
bool is_valid(char *s)
{
    stack<char>stk;
    for(int i=0;s[i]!='\0';i++)
    {
        char ch=s[i];
        if(ch=='(')
        {
            stk.push('(');
        }else
        if(ch==')')
        {
            if(stk.empty() || stk.top()!='(')
            {
                return false;
            }else
            stk.pop();
        }
    }
    return stk.empty();
}

int main ()
{
    char s[100]="(((a+b)+(c-d+f))";
    if(is_valid(s))
    {
        cout<<"given string has valid parenthesis"<<endl;
    }else
    cout<<"invalid parenthesis";
    return 0;
}