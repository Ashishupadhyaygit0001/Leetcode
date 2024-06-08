//Observation 
class Solution {
public:
    int findWinningPlayer(vector<int>& skills, int k) {
      int prev= skills[0];
      int consecwin=0;
      int n=skills.size();
      int winnerId=0;
        for(int i=1; i<n ; i++){
            if(skills[i]>prev){
                prev=skills[i];
                consecwin=0;
                winnerId=i;
            }
            consecwin++;
            if(consecwin==k) break;
        }
        return winnerId;
    }
};
