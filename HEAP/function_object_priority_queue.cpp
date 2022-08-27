// in this it is called function call as we do in class fun
#include<bits/stdc++.h>
using namespace std;
class fun
{
    public:
    void operator()()
    {
        cout<<"coding is fun"<<endl;
    }
};
int main ()
{
    fun f;
    f();
    return 0;
}