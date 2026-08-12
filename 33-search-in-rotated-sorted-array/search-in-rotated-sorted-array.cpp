class Solution {
public:

int pivot(vector<int> &arr){

    int s = 0 ;
    int e = arr.size() - 1 ;
    int mid = s + ((e - s)/2);

    while(s < e ){

       if(arr[0] <= arr[mid]){
        s = mid + 1 ;
       } 

       else {

        e = mid ;
       }

        mid = s + ((e - s)/2);

    }

    return s ;
}

int binary_search(vector<int>& arr , int target , int  start , int end ){

    int s = start ;
    int e = end  ;
    int mid = s + ((e - s)/2);
    int ans = -1 ; 

    while(s <= e ){

       if(arr[mid] == target ){
        
       return mid ; 
       } 

       else if (arr[mid] < target) {

        s = mid + 1 ;
       }

        else {

            e = mid - 1 ;
        }

        mid = s + ((e - s)/2);

    }

    return ans  ;
}



    int search(vector<int>& nums, int target) {

        int pivot_element = pivot(nums) ;
        
        if( nums[pivot_element] <= target && nums[nums.size() - 1 ] >= target ){

            return binary_search(nums , target , pivot_element , nums.size()-1) ;
        }

        else {

            return binary_search(nums , target , 0 , pivot_element - 1 ) ; 
        }

    }
};