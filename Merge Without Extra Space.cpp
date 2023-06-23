// approach1  TLE in gfg 
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

// approach  2  gap method