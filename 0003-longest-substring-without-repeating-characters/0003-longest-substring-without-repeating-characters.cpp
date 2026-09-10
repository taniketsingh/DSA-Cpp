class Solution {
public:
    int lengthOfLongestSubstring(string s) {   
        unordered_set<char> seen;
        int left = 0;    
        int maxlenght = 0;
        
        for(int right = 0; right < s.size(); right++){
            while(seen.count(s[right])){
                seen.erase(s[left]);
                left++;
            }
            seen.insert(s[right]);
            maxlenght = max(maxlenght, right - left + 1);
        }
        return maxlenght;
    }
};