class Solution {
public:
    string compressedString(string word) {
        unordered_map<char, int> mp;
        string ans;

        if (word.empty()) {
            return ans;
        }

        char current_char = word[0];
        mp[current_char] = 1;

        for (int i = 1; i < word.length(); i++) {
            if (word[i] == current_char) {
                if (mp[current_char] < 9) {
                    mp[current_char]++;
                } else {
                    ans += to_string(mp[current_char]);
                    ans.push_back(current_char);
                    mp[current_char] = 1;  // Reset the count for the new sequence
                }
            } else {
                ans += to_string(mp[current_char]);
                ans.push_back(current_char);
                current_char = word[i];
                mp[current_char] = 1;  // Start counting the new character
            }
        }

        // Append the last character and its count
        ans += to_string(mp[current_char]);
        ans.push_back(current_char);

        return ans;
    }
};
