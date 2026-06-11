class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hashMap;

        for(int i = 0;i< nums.size();++i){
            int c = target - nums[i];

            if(hashMap.find(c) != hashMap.end()){
                return {hashMap[c],i};
            }
            hashMap[nums[i]] = i;
        }
        return{};
        
    }
};