class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0;
        int minimumLength  = INT_MAX;
        int currentSum = 0;

        for(int r = 0; r<nums.size(); r++){
            currentSum += nums[r];

            while(currentSum>=target){
                minimumLength = min(minimumLength,(r-l+1));
                currentSum -= nums[l];
                l++;
            }
        }
        return (minimumLength == INT_MAX) ? 0: minimumLength;
    }
};