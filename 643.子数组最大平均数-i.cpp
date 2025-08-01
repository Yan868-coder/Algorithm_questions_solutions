/*
 * @lc app=leetcode.cn id=643 lang=cpp
 *
 * [643] 子数组最大平均数 I
 */

// @lc code=start
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       int len = nums.size(); 
       if(len <= 1)return nums[0];
       double maxSum = INT_MIN;
       double sum = 0;
       for(int i = 0;i < len;i++){
           sum += nums[i];
           if(i<k-1){
            continue;
           }

           maxSum = max(maxSum,sum);
           if(i-k+1>=0){
            sum -= nums[i-k+1];
           }
       }
       double res = (double)maxSum/k;
       return res;
    }
};
// @lc code=end
//max函数下面是下一轮的开始，因此要提前减去窗口里面的最后一个
//最后求平均时因为k是整数，因此需要将结果强制转化为double
//有负值要考虑将最小值赋为INT_MIN
