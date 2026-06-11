class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evenCount = 0;
        
        for(int i = 0; i<nums.size(); i++){
            if((10<= nums[i] && nums[i]<= 99) || (1000<= nums[i] && nums[i] <= 9999) || (nums[i] == 100000)){
                evenCount += 1;
            }
        }
        return evenCount;
    }
};