class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        //this is just to make the code work at its maximum speed without the need to worry about sycning with C. original complexity is still O(n)
        //ios_base::sync_with_stdio(false);
        //cin.tie(NULL);

        unordered_set<int> s;
        for(int i = 0; i < nums.size(); i++){
            if(s.count(nums[i])){
                return true;
            }
            else{
                s.insert(nums[i]);
            }

            if(s.size() > k){
                s.erase(nums[i-k]);
            }
        }
        return false;
    }
};
