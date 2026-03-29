class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    std::unordered_map<int,int> counts;
    for (int x: nums){
        counts[x]++;
    }

    for (auto const &[key,val] : counts){
        if (val > 1)
        {
            return true;
        }
    }
    return false;
    }
};