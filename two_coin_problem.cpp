#include<iostream>
using namespace std;
int totalways(int coins[],int n,int target,int currentcoin)
{
    //base case
    if(target==0)
    return 1; //matlab ki ek tarika milgya no. banane ka.
    if(target<0)
    {
        return 0; //matlab jis raaste se aa rhe ho in combinations se ye no. banana possible ni hai.
    }
    // i= current coin se ek recursive call me agar ek type ka coin use ho gaya to vo dobara use ni ho sakta next coin ki recursive calls me.
    // jaise is recursive call me agr hum log 1 se aage badh ke 2 pe aa gaye to uske bd jo aage ki calls jayengi usme dobara 1 ni use ho sakta.
    //isse repition ni hoga jaise 112 hi aayega 121 ya 211 ni.
    int ways=0;
    for(int i=currentcoin;i<n;++i)
    {
        ways+=totalways(coins,n,target-coins[i],i);
    }
    return ways;


}
int main()
{
    int coin[]={1,2};
    int target=4;
    int ans=totalways(coin,2,target,0);
    cout<<"total ways: "<<ans;
}