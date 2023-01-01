#include<iostream>
using namespace std;
void leftsum_rightsum(char *output,int i,int j,int leftsum,int rightsum,int n)
{
    //base case.
    if(n==0)
    {
        if(leftsum==rightsum)
        {   
            
            
                cout<<output;
            
            cout<<endl;
            
        }
        return;
    }

    //total 4 case (0,0) (0,1) (1,0) (1,1)

    //0,0
    output[i]='0';
    output[j]='0';
    leftsum_rightsum(output,i+1,j-1,leftsum+0,rightsum+0,n-2);

        //0,1
    output[i]='0';
    output[j]='1';
    leftsum_rightsum(output,i+1,j-1,leftsum+0,rightsum+1,n-2);

        //1,0
    output[i]='1';
    output[j]='0';
    leftsum_rightsum(output,i+1,j-1,leftsum+1,rightsum+0,n-2);

        //1,1
    output[i]='1';
    output[j]='1';
    leftsum_rightsum(output,i+1,j-1,leftsum+1,rightsum+1,n-2);

}
int  main()
{
    cout<<"enter the size:";
    int n;
    cin>>n;
    char *output=new char[2*n];
    leftsum_rightsum(output,0,2*n-1,0,0,2*n);
   

}