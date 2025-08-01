/*
 * @lc app=leetcode.cn id=2379 lang=cpp
 *
 * [2379] 得到 K 个黑块的最少涂色次数
 */

// @lc code=start
class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int len = blocks.length();
        int minRes = INT_MAX;
        int sum = 0;
        for(int i = 0;i < len;i++){
            if(blocks[i] == 'W'){
                sum++;
            }

            if(i < k-1){
                continue;
            }
            minRes = min(minRes, sum);
            if(blocks[i-k+1] == 'W'){
                sum--;
            }
        }
        return minRes;
    }
};
// @lc code=end

