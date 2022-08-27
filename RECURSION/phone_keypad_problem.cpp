#include<bits/stdc++.h>
using namespace std;
char keypad[][10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void generate_phone_combinations(char *in,char *out,int i,int j)
{
    //base case
    if(in[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<endl;
        return ;
    }
    int digit=in[i]-'0';
    //rec case
    //inc
    for(int k=0;keypad[digit][k]!='\0';k++)
    {
        out[j]=keypad[digit][k];
        generate_phone_combinations(in,out,i+1,j+1);
    }
    return;
}
int main ()
{
    char input[100];
    cin>>input;
    char output[100];
    generate_phone_combinations(input,output,0,0);
    return 0;
}