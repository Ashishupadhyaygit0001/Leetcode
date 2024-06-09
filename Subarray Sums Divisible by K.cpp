//  Concept is, if remainder is repeating in the map then the value that which we are adding is also multiple of k(Conept of modulo)
//if we find any negative remainder then we add k to it 
//if we find that remainder is same then we will add the frequency of that remainder in map
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n =nums.size();
        int sum=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        int result=0;
        for(int i=0; i<n;i++){
            sum+=nums[i];
            int rem=sum%k;
            if(rem<0)rem+=k;
            if(mp.find(rem)!=mp.end()){
                result+=mp[rem];
            }
            mp[rem]++;
        }
        return result;
    }
};
