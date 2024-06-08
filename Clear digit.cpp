//In this question we could use isdigit function to determine the digit , if it is found just pop_back the previous character,,,,,,as the s contain first character and then digits
class Solution {
public:
    string clearDigits(string s) {
        string ans="";
        for(int i=0 ; i<s.length(); i++){
            if(isdigit(s[i])!=1){
                ans+=s[i]; 
            }
            else{
                ans.pop_back();
            }
        }
        return ans;
    }
};
