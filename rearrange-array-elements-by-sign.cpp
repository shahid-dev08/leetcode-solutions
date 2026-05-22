class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n);
        int pos = 0, neg = 1;
        
        for(int x = 0; x < n; x++)
        {
            if(nums[x] > 0)
            {
                arr[pos] = nums[x];
                pos += 2;
            }
            else
            {
                arr[neg] = nums[x];
                neg +=2;
            }
        }
        return arr;
        
    }
};