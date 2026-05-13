class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int max = *max_element(nums.begin(),nums.end());
        int pdt = 1;

        for(int i = 0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                pdt *= nums[i];
                if(pdt > max) max = pdt;
            }
            else pdt = 1;
        }
        pdt = 1;
        for(int i = n-1;i>=0;i--)
        {
            if(nums[i]!=0)
            {
                pdt *= nums[i];
                if(pdt > max) max = pdt;
            }
            else pdt = 1;
        }
        return max;
    }
};