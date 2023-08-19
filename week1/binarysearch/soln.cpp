class Solution {
public:
    int search(vector<int>& nums, int target) {
        int e= nums.size()-1;
        int b = 0;
        while(b<=e){
            int mid = (b+e)/2;
            if( target == nums[mid])
                return mid;
            if (target < nums[mid])
                e=mid-1;
            else 
                b=mid+1;
        }
        return -1;
    }
};