/*
给出一个 32 位的有符号整数，你需要将这个整数中每位上的数字进行反转。

示例 1:

输入: 123
输出: 321
 示例 2:

输入: -123
输出: -321
示例 3:

输入: 120
输出: 21
注意:

假设我们的环境只能存储得下 32 位的有符号整数，则其数值范围为 [−231,  231 − 1]。请根据这个假设，如果反转后整数溢出那么就返回 0。
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    int reverse(int x) {
        if(x == 0)
            return 0;
        bool bNegative = x<0;
        unsigned long long lValue = abs(x);
        string strValue = to_string(lValue);
        std::reverse(strValue.begin(), strValue.end());
        if(strValue[0] == 0)
        {
            strValue = strValue.substr(strValue.find_first_not_of("0"));
        }
        lValue = atol(strValue.c_str()) ;
        int symbol = bNegative?(-1):1;
        if(lValue > INT_MAX || (-1 * lValue) < INT_MIN)
            return 0;
        else
            return lValue * symbol;
    }
};

class Solution {
    public int reverse(int x) {
        int y = 0;
        while (x) {
            if (y > 214748364 || y < -214748364) {
                return 0;
            }
            y = y * 10 + x % 10;
            x = x / 10;
        }
        return y;
    }
}