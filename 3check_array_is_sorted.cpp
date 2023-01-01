#include<iostream>
using namespace std;
bool issorted(int arr[],int n)
{
    //base case
    if(n==0)
    return true;
    if(arr[n]<arr[n-1])
    return false;
    else{
        return issorted(arr,n-1);
    }
}

int main()
{
    int arr[]={2,4,6,8,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"is sorted? "<<issorted(arr,n-1);
}