class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>done;
        for(int i:nums){
            if(done.count(i)){
                return true;
            }
            done.insert(i);
        }
        return false;
    }
};