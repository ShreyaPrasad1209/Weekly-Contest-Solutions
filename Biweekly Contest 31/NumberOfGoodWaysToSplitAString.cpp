class Solution {
public:
    int numSplits(string s) {
        map<char, int> l, r;
        for(auto &it:s)
            r[it]++;
        int ans = 0;
        for(auto &it:s)
        {
            l[it]++;
            r[it]--;
            if(r[it] == 0)
                r.erase(it);
            if(l.size() == r.size())
                ans++;
        }
        return ans;
    }
};

//Link: https://leetcode.com/contest/biweekly-contest-31/problems/number-of-good-ways-to-split-a-string/
