class Solution {
    vector<int> ans;
    vector<pair<int,int>> a;
    int A(int x)
    {
        return x<0?-x:x;
    }
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int n=arr.size(),i;
        a.clear();
        ans.clear();
        for(auto c:arr)a.push_back(make_pair(A(c-arr[n-1>>1]),c));
        sort(a.begin(),a.end(),greater<pair<int,int>>());
        for(i=0;i<k;i++)ans.push_back(a[i].second);
        return ans;
    }
};

//LeetCode Link: https://leetcode.com/problems/the-k-strongest-values-in-an-array/
