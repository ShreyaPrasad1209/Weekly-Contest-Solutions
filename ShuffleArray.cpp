class Solution {
    vector<int> ans;
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i;
        ans.clear();
        for(i=0;i<n;i++)
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[i+n]);
        }
        return ans;
    }
};

//LeetCode Link: https://leetcode.com/problems/shuffle-the-array/
