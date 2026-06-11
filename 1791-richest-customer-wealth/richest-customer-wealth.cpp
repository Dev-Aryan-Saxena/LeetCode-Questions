class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi = 0;
        for(const auto& i : accounts){
            int wealth = accumulate(i.begin(),i.end(),0);
            maxi = max(maxi,wealth);
        }
        return maxi;
    }
};