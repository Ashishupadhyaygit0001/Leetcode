//clone the heights vector and sort it, then just traverse through the vector heights and compare the each element , if its not equal then just count++, 
//return count at the end
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> v(heights);
        sort(v.begin(),v.end());
        int count = 0;
        for(int i=0;i<heights.size();i++){
            if(heights[i] != v[i])
             count++;
        }
        return count;
    }
};
