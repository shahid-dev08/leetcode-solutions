class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top = 0, bottom = matrix.size() - 1, left = 0, right = matrix[0].size() - 1;
        vector<int> v;
        while(top <= bottom && left <= right)
        {
            for(int j = left ; j <= right ; j++) v.push_back(matrix[top][j]);
            top++;

            for(int i = top ; i <= bottom ; i++) v.push_back(matrix[i][right]);
            right--;
            if(top <= bottom)
                for(int j = right ; j >= left ; j--) v.push_back(matrix[bottom][j]);
                bottom--;
            if(left <= right)
                for(int i = bottom ; i >= top ; i--) v.push_back(matrix[i][left]);
                left++;
        }
        return v;
    }
};