#include<iostream>
using namespace std;
void merge(int arr[],int start,int end,int mid,int &count)
{
    // sabse pehle jo do arrays bananai hai unki length calculate  karenge

    int leftlength=mid-start+1;
    int rightlength=end-mid;

    //ab is length ki do arrays banani hai.
    int *leftarray=new int[leftlength];

    int *rightarray=new int[rightlength];

    //ab array ban gayi ab hume usme values dalni hai.

    int mainindex=start;

    for(int i=0;i<leftlength;++i)
    {
        leftarray[i]=arr[mainindex++];
    }

    for(int i=0;i<rightlength;++i)
    {
        rightarray[i]=arr[mainindex++];
    }


    // ab do arrays ban gayi ab unhe sorted way me merge karna hai.
    mainindex=start;
   int leftindex=0;
  int  rightindex=0;

    while(leftindex<leftlength && rightindex<rightlength )
    {
        if(leftarray[leftindex]<rightarray[rightindex])
        {
            arr[mainindex++]=leftarray[leftindex++];

        }
        else{ count+=leftlength-leftindex;
            arr[mainindex++]=rightarray[rightindex++];

        }
    }

     while(leftindex<leftlength  )
    {
        
            arr[mainindex++]=leftarray[leftindex++];

        }
         while(rightindex<rightlength  )
    {
        
            arr[mainindex++]=rightarray[rightindex++];

        }



}
void mergesort(int arr[],int start,int end,int &count)
{
    //base case jab single hi element bache.
    if(start>=end)
    {
        return;

    }

    int mid=(start+end)/2;

    //left call marke left sorted subarray mangwa lo.

    mergesort(arr,start,mid,count);


    //right call marle right sorted subarray manwa lo.
    mergesort(arr,mid+1,end,count);

    // ab dono sorted arrays ko sorted way me merge krde.
    merge(arr,start,end,mid,count);

}
int main()
{
    int arr[]={14,13,12,6,2,1};
    int count=0;
    mergesort(arr,0,5,count);
    

    for(int i=0;i<6;++i)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<count;
}