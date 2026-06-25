class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int c = 0;
        for(int i = 0; i < n;i++)
        {
            int d = 0;
            while(nums[i] > 0)
            {
                nums[i] /= 10;
                d++;
            }
            if(d%2 == 0) c++; 
        }
        return c;
    }
};