#include<iostream>
using namespace std;
void space_123(string &input,string output,int index)
{
    if(index==input.length())
    {
        cout<<output<<" ";
        return;
    }

    //space ko include ni karna hai.
    char ch=input[index];
    output.push_back(ch);
    space_123(input,output,index+1);
    if(index!=input.length()-1)
    {
    //include karna hai space
    output.push_back('_');
    space_123(input,output,index+1);
    }


}
int main()
{
    string input="123";
    string output="";
    space_123(input,output,0);
}
