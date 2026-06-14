#pragma GCC optimize("O3") // Forces aggressive compiler optimization

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        //HMM Just for fun, hehe hehe
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        double currentSum = 0;//Let's see if the time complexity cha ges by declaring the variable with the intialization
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