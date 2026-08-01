class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;

        for(int i = 0 ; i < numRows ; i++)
        {
            vector<int> dum(i+1);   
            for(int j = 0 ; j <= i ; j++)
            {
                
                if(j == 0 || j == i) dum[j] = 1;
                else
                {
                    dum[j] = v[i-1][j-1] + v[i-1][j];
                }
            } 
            v.push_back(dum);
        }
        return v;
    }
};