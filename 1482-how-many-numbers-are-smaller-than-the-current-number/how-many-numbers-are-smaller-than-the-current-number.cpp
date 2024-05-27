class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());
        
        for(int& num : nums)
        {
            num = lower_bound(sorted.begin(), sorted.end(), num) - sorted.begin();
        }
        return nums;
    }
};