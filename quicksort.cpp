class Solution {
public:
    int f(vector<int>& nums, int low, int high)
    {
        int rand_idx = low + rand() % (high - low + 1);
        swap(nums[low], nums[rand_idx]);
        int pivot = nums[low];
        int left = low, right = high;

        while(left < right)
        {
            while(left <= high && nums[left] <= pivot) left++;
            while(right >= low && nums[right] > pivot) right--;
            if(left < right) swap(nums[right],nums[left]);
        }
        swap(nums[low],nums[right]);
        return right;
    }

    void quicksort(vector<int>& nums, int low, int high)
    {
        if(low<high){
            int pi = f(nums, low, high);
            quicksort(nums, low,pi-1);
            quicksort(nums, pi+1,high);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        
        quicksort(nums, 0, nums.size() - 1);
        return nums;
    }
};