#include<iostream>
using namespace std;
int partition(int arr[],int start,int end)
{
    //partition ka main kaam hai pivot element ko sahi index pe pohochana or uske left me saare chote elements 
    //rakhna or right me saare bade elements hona.
    int pivot=arr[start];
    //sahi index pe pohochao
    int count=0;
    for(int i=start;i<=end;++i)
    {
        if(arr[i]<pivot)
        count++;
    }
    int pivotindex=start+count;
    swap(arr[start],arr[pivotindex]);

    // ab left right ko shi karna hai.
    int i=start;
    int j=end;
    while(i!=pivotindex && j!=pivotindex)
    {
        if(arr[i]>=pivot)
        {swap(arr[i],arr[j]);
          j--;
        }
        else{
            i++;
        }
    }
    return pivotindex;
}
void quicksort(int arr[],int start,int end)
{   cout<<"start"<<start<<endl;
cout<<"end"<<end<<endl;

    //base case.
    if(start>=end)
    {return;}

    int p=partition(arr,start,end);
    cout<<"p="<<p<<endl;
    cout<<"************"<<endl;

    //left subarray ko sorted krdo fir right subarray ko sorted krdo.

    quicksort(arr,start,p-1);

    quicksort(arr,p+1,end);
}
int main()
{
    int arr[]={-14,13,12,-6,2,1};
    quicksort(arr,0,5);
     for(int i=0;i<6;++i)
    {
        cout<<arr[i]<<" ";
    }
}