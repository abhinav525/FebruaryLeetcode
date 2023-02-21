//we will use xor operator 
// **** on the left half 1st appearance of num is at even index and second instance of number will be at odd index
//**** and on the right half after the single number the 1st instance will be at odd index and 2nd will be at even index

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low =0;
        int high =nums.size()-2;
        while(low<=high){
            int mid =(low+high) >> 1;
            if(nums[mid] == nums[mid^1]){
                low =mid+1;

            }
            else{
                high =mid-1;

            }
        }
        return nums[low];
        
    }
};
