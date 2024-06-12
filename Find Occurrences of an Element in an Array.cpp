class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int> occu;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == x)
            {
                occu.push_back(i);
            }
        }
        
        vector<int> res;
        int maxOccu = occu.size();
        for (int i = 0; i < queries.size(); i++)
        {
            if (queries[i] > maxOccu)
                res.push_back(-1);
            else
                res.push_back(occu[queries[i] - 1]);
        }
        
        return res;
    }
};
