/*
给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现了三次。找出那个只出现了一次的元素。

说明：

你的算法应该具有线性时间复杂度。 你可以不使用额外空间来实现吗？

示例 1:

输入: [2,2,3,2]
输出: 3
示例 2:

输入: [0,1,0,1,0,1,99]
输出: 99
*/

// 数电状态机好好思考一下

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i = 0;i<n;++i) {
            bool flag1 = false, flag2 = false;
            if (i - 1 == -1) {
                flag1 = true;
            } else {
                if(nums[i-1] != nums[i]) {
                    flag1 = true;
                }
            }
            if (i + 1 == n) {
                flag2 = true;
            } else {
                if(nums[i+1] != nums[i]) {
                    flag2 = true;
                }
            }
            if(flag1 && flag2) {
                return nums[i];
            }
        }
        return nums[0];
    }
};