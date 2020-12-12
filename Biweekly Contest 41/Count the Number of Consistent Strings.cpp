class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char, int> freq;
        bool flag=0;
        int count=0;
        for(char c: allowed)
        {
            freq[c]++;
        }
        
        for(int i=0;i<words.size();i++)
        {
            string s = words[i];
            
            for(int j=0;j<s.length();j++)
            {
                if(freq.count(s[i])==0)
                {
                   flag=1; 
                }
                
                if(j==s.length()-1 && flag==0)
                {
                    count++;
                }
            }
            
           flag=0; 
        }
        
        return count;
    }
};
