#include <iostream>

using namespace std;
int getSum(int arr[],int size){
    //base case
    if(size==0){return 0;}
    if(size==1){return arr[0];}
    
    
    //R.call
    int sum=arr[0]+getSum(arr+1,size-1);
    return sum;
    
}


int main()
{
    cout<<"Hello World";
    int arr[]={3,2,5,1,6};
    int ans=getSum(arr,5);
    cout<<"sum is "<<ans;
    return 0;
}