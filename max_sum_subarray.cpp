class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int max = *max_element(nums.begin(),nums.end());
        int sum = 0;

        for(int i =0;i<n;i++)
        {
            if(sum + nums[i] >=0)
            {
                sum += nums[i];
                if(sum > max) max = sum;
            }
            else sum = 0;
        }
        return max;
        
        
    }
};