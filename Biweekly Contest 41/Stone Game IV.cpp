class Solution {
public:
    int stoneGameVI(vector<int>& aliceValues, vector<int>& bobValues) {
        sort(aliceValues.begin(), aliceValues.end());
        sort(bobValues.begin(), bobValues.end());
        
        reverse(aliceValues.begin(), aliceValues.end());
        reverse(bobValues.begin(), bobValues.end());
        
        int aSum=0, bSum=0, ans;
        
        for(int i=0; i<aliceValues.size()-1;i++)
        {
              aSum+=aliceValues[i];
        }
        
             for(int i=0; i<bobValues.size()-1;i++)
        {
              bSum+=bobValues[i];
        }
        
        if(aSum > bSum)
        {
            ans=1;
        }
        if(aSum==bSum)
        {
            ans=0;
        }
        if(aSum < bSum)
        {
            ans=-1;
        }
        
        return ans;
    } 
};
