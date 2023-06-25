// approach1  TLE in gfg  TC - O(n*m)
class Solution{
    private:
    
    public:
    void fixArray2(long long arr2[],int m){
        for(int i=1;i<m;i++){
            if(arr2[i]<arr2[i-1]){
                swap(arr2[i],arr2[i-1]);
            }
        }
    }
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            int i=0 ,j=0 ;
            
            while(i<n){
                
                if(arr1[i]>arr2[j]){
                    swap(arr1[i],arr2[j]);
                    fixArray2(arr2,m);
                }
                i++ ;
            }
        } 
};

// approach  2  gap method  TC- O(n*log(n))

class Solution{
    private:
    void greaterOf(long long arr1[], long long arr2[], int a, int b){
        
        if(arr1[a]>arr2[b]){
            swap(arr1[a],arr2[b]);
        }
    }
    
    public:
    
   
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            int len =m+n ;
            int gap = (len/2) +(len%2) ;
            while(gap>0){
                int i=0;
                int j= i+gap;
              while( j<len ){
                if(i<n && j>=n){
                    greaterOf(arr1,arr2,i,j-n);
                }
                else if(i>=n){
                    greaterOf(arr2,arr2,i-n,j-n);
                }
                else{
                    greaterOf(arr1,arr1,i,j);
                }
                i++;j++;
                
            } if(gap==1) break;
            gap=(gap/2)+(gap%2);
            }