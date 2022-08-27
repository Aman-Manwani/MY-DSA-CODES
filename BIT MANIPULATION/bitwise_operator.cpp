#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a=5,b=7;
    //4 bitwise operators &,|,^,~named as and, or, xor,not
    cout<<(a&b)<<" "<<(a|b)<<" "<<(a^b)<<" "<<~(a^b)<<endl;
    //2 more operation left shift operator and right shift operator denpoted by << an\d >>
    // basically << operator multiply the number by 2 to the power a(given) i.e number written after << and>> is a
    cout<<(a<<2)<<" "<<(a>>2)<<endl;
    return 0;
}