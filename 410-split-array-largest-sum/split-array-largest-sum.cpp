class Solution {
public:

    bool ispossible(vector<int>& nums, int k , int  mid  ){

        int key = 1 ; 
        int sum = 0 ;

        for(int i = 0 ; i < nums.size() ; i++){
        
        if(sum + nums[i] <= mid ){

            sum = sum + nums[i] ;
        }

        else{

            key = key + 1 ;
            if( key > k || mid < nums[i]){

                return false ; 
            }

            // sum = 0 ;
            sum = nums[i];
        }

       }

       return true  ; 

    }



    int splitArray(vector<int>& nums, int k) {

      int start = 0 ;
      int max = 0  ; 
      int ans = -1 ;

    for( int i = 0 ; i < nums.size() ; i++ )
    {
        max = max + nums[i] ; 
    }

    int end = max ; 

    int mid = start + (( end - start ) / 2 ) ;

    while ( start <= end ){

        if ( ispossible( nums, k , mid ) ){
            end = mid - 1 ;
            ans = mid ;
        }

        else {

            start = mid + 1  ; 
        } 

        mid = start + (( end - start ) / 2 ) ;

    }

    return ans ; 


    }
};