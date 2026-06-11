class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int answer = nums[0];
        int total = 0;

        for(const auto&i:nums){
            if(total<0){
                total = 0;
            }

            total += i;
            answer = max(answer,total);
        }
        return answer;
    }
};