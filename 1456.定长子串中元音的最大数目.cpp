/*
 * @lc app=leetcode.cn id=1456 lang=cpp
 *
 * [1456] 定长子串中元音的最大数目
 */

// @lc code=start
class Solution {
public:
    int maxVowels(string s, int k) {
        int len = s.length();
        int maxNum  = 0;
        int sum = 0;
        for(int i = 0; i < len; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                sum++;
            }
            if(i < k-1){
                continue;
            }
            maxNum = max(maxNum, sum);

            char left = s[i-k+1];
            if(left == 'a' || left == 'e' || left == 'i' || left == 'o' || left == 'u'){
                sum--;
            }
        }
        return maxNum;
    }
};
// @lc code=end

