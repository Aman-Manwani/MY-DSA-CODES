#include<bits/stdc++.h>
using namespace std;
void generate_subsequences(char *in,char *out,int i,int j)
{
    //base case
    if(in[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<endl;
        return ;
    }
    // rec case
    //include the current character
    out[j]=in[i];
    generate_subsequences(in,out,i+1,j+1);
    //exclude the current character 
    generate_subsequences(in,out,i+1,j);
}
int main ()
{
    char input[100];
    cin>>input;
    char output[100];
    generate_subsequences(input,output,0,0);
    return 0;
}