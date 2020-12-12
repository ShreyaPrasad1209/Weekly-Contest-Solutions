class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
      vector<int>res(nums.size());
      int sum=0;  
     for(int i=0;i<nums.size();i++)
     {
         for(int j=0;j<nums.size();j++)
         {
            sum+= abs(nums[i]-nums[j]); 
         }
         
         res[i]=sum;
         sum=0;
     }
        return res;
    }
};
