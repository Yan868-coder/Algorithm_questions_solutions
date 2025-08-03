/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int len=s.length();
         vector<int> flag(128,0);
         int left=0;
         int res=0;
         for(int i=0;i<len;i++){
            left=max(left,flag[s[i]]);
            flag[s[i]]=i+1;
            res=max(res,i-left+1);
         }
         return res;
    }
};
// @lc code=end

