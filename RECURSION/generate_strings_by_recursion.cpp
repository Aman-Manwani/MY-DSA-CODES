#include<bits/stdc++.h>
using namespace std;
char letters[][2]={"","A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
void ans(char input[],char output[],int i,int j)
{
    //base case
    if(input[i]=='\0')
    {
        output[j]='\0';
        cout<<output<<endl;
        return;
    }
    //rec case
    //all single include
    int digit=input[i]-'0';
    output[j]=letters[digit][0];
    ans(input,output,i+1,j+1);
    // two digits at a time
    if(input[i+1]!='\0')
    {
        if((input[i]-'0')*10+(input[i+1]-'0')<=26)
        {
            output[j]=letters[(input[i]-'0')*10+(input[i+1]-'0')][0];
            ans(input,output,i+2,j+1);
        }
    }
    return;
}
int main ()
{
    char input[100];
    char output[100];
    cin>>input;
    ans(input,output,0,0);
    return 0;
}