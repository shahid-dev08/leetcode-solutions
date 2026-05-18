class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int max = 0;
        int p = 0;
        int l = 0;
        int r = n-1;
        while(l<r)
        {
            p = (r-l) * min(height[l],height[r]);
            if(height[r] > height[l]) l++;
            else r--;

            if(p > max) max = p;
        }
        return max;
        
    }
};