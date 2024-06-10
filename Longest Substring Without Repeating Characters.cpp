class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        unordered_map<char, int> mp; // map to store the last index of each character
        int count = 0;
        int i = 0; // start pointer of the sliding window

        for (int j = 0; j < s.length(); ++j) {
            if (mp.find(s[j]) != mp.end() && mp[s[j]] >= i) {
                // if the character is already in the map and is within the current window
                i = mp[s[j]] + 1; // move the start pointer to the right of the last seen index of s[j]
            }
            mp[s[j]] = j; // update the last seen index of s[j]
            count = std::max(count, j - i + 1); // update the maximum length
        }

        return count;
    }
};
