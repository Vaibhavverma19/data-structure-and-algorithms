#include<iostream>
using namespace std;
int maximum_possible_sum(int arr[],int n,int start,int end)
{
    if(n==0)
    {
        return 0;
    }

    int choice1=arr[start]+ min(maximum_possible_sum(arr,n-2,start+1,end-1),maximum_possible_sum(arr,n-2,start+2,end));

    int choice2=arr[end]+ min(maximum_possible_sum(arr,n-2,start+1,end-1),maximum_possible_sum(arr,n-2,start,end-2));

    return max(choice1,choice2);
}

int main()
{
    int arr[]={20,2,2,2,10,30 };
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"maximum sum that player 1 can achieve is:"<<maximum_possible_sum(arr,n,0,n-1);
}