#include<iostream>
using namespace std;
void subset_string(string &input,string output,int i)
{   
    if(i==input.length())
    {   
        cout<<output<<" ";
        return;

    }
    //exclusion call

    subset_string(input,output,i+1);

    //inclusion
    char ch=input[i];
    output.push_back(ch);
    subset_string(input,output,i+1);
}
int main()
{
    string input="abc";
    string output="";
    // cout<<input[0];
    // cout<<input.length();
    subset_string(input,output,0);
}
