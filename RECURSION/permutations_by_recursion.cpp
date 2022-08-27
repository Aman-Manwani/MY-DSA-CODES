// in this question there is a variation in which there is a repitattion of letters in string so to get unique permutations you have to use set; 
#include<bits/stdc++.h>
using namespace std;
void permutations(char *input,char*output,int i,int j)
{
    //base case
    if(input[i]=='\0')
    {
        output[j]='\0';
        cout<<output<<" ";
        return;
    }
    //rec case
    for(int k=i;input[k]!='\0';k++)
    {
        swap(input[i],input[k]);
        output[j]=input[i];
        permutations(input,output,i+1,j+1);
        //backtracking step;
        swap(input[i],input[k]);
    }
}
int main ()
{
    char input[100];
    cin>>input;
    char output[100];
    permutations(input,output,0,0);
    return 0;
}