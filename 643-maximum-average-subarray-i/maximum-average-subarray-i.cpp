class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double currentSum;
        for(int i = 0; i<k; i++){
            currentSum += nums[i];
        }
        double maxSum = currentSum;
        for(int j = k; j<nums.size(); j++){
            currentSum = nums[j] + currentSum - nums[j-k];
            maxSum = max(maxSum,currentSum);
        }
        return maxSum/k;
    }
};