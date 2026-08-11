class Solution {
public:

   int leftmost(vector<int> &arr , int target ){

    int s = 0 ; 
    int e = arr.size() - 1 ; 
    int mid = s +((e - s )/2);
    int ans = -1 ; 

    while(s<=e ){

        if( arr[mid] == target){

            ans = mid ; 
            e = mid - 1 ;

        }

        else if ( arr[mid] < target) {

            s = mid + 1 ;
        }

        else   {

            e = mid -  1 ;
        }

         mid = s +((e - s )/2);
    }
    return ans ; 
   }


     int rightmost(vector<int> &arr , int target ){

    int s = 0 ; 
    int e = arr.size() - 1  ; 
    int mid = s +((e - s )/2);
    int ans = -1 ; 

    while(s<=e ){

        if( arr[mid] == target){

            ans = mid ; 
            s = mid + 1 ;

        }

        else if ( arr[mid] < target) {

            s = mid + 1 ;
        }

        else   {

            e = mid -  1 ;
        }

         mid = s +((e - s )/2);
    }
    return ans ; 
   }
    vector<int> searchRange(vector<int>& nums, int target) {

        int first = leftmost( nums ,  target) ; 
        int last = rightmost( nums ,  target) ; 

       return {first, last};
    }
};