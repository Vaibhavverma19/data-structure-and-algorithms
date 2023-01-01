// ------------------------------LINEAR SEARCH-----------------------------------
#include<iostream>
using namespace std;
// int linearsearch(int arr[],int n,int target)
// {
//     //base case
//     if(n<0)
//     return -1;
//     if(arr[n]==target)
//     return n;
//     else return linearsearch(arr,n-1,target);
// }

// int main()
// {
//     int arr[]={14,2,8,7,11,6};
//     cout<<"pos of target:"<<linearsearch(arr,5,1);
// }

int binarysearch(int arr[],int start, int end,int target)
{
    if(start>end)
    {
        return -1;
    }
    
    int mid=start+ (end-start)/2;
    

    if(arr[mid]==target)
       return mid;

    else{
        if(arr[mid]>target)
        return binarysearch(arr,start,mid-1,target);
        else return binarysearch(arr,mid+1,end,target);
    }
}
int main()
{
    int arr[]={2,4,6,8,14,15};
 
    cout<<"pos of target"<<binarysearch(arr,0,5,8);
}