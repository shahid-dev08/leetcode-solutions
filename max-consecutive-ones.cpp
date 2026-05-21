class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int max = 0;

        for(int i =0; i<n;i++)
        {
            if(nums[i] == 1)
            {
                sum++;
            }
            else sum = 0;
            if(sum > max) max = sum;
        }
        return max;
    }
};