/*
 * @lc app=leetcode.cn id=2090 lang=cpp
 *
 * [2090] 半径为 k 的子数组平均值
 */

// @lc code=start
class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int> res(nums.size(),-1);
        long long sum = 0;
        for(int i = 0;i < nums.size();i++ ){
          sum += nums[i];
          if(i < k*2){
            continue;
          }
          res[i-k] = sum / (2 * k + 1);
          sum -= nums[i - 2 * k ];
          
        }
        return res;
    }
};
// @lc code=end

