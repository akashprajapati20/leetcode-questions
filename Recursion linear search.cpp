#include <iostream>

using namespace std;
bool Searchitem(int arr[],int target,int size){
    //base case
    if(size==0){return 0;}
    
    if(arr[0]==target){return 1;}
    
    //R.call
    int remaining=Searchitem(arr+1,target,size-1);
    return remaining;
    
}


int main()
{
    cout<<"Hello World";
    int arr[]={3,2,8,1,6};
    int ans=Searchitem(arr,2,5);
    cout<<"sum is "<<ans;
    return 0;
}