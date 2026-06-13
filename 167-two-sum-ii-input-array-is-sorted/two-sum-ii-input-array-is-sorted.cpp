class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size() - 1;

        while(l<r){
            int calculation = numbers[l] + numbers[r];
            
            if(calculation==target){
                return {l+1,r+1};
            }
            else if(calculation < target){
                l++;
            }
            else{
                r--;
            }
        }
        return {};
    }
};