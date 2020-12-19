/*
给定两个字符串形式的非负整数 num1 和num2 ，计算它们的和。

 

提示：

num1 和num2 的长度都小于 5100
num1 和num2 都只包含数字 0-9
num1 和num2 都不包含任何前导零
你不能使用任何內建 BigInteger 库， 也不能直接将输入的字符串转换为整数形式
*/

// 逆序相加

class Solution {
public:
    string addStrings(string num1, string num2) {
        if (num1 == "0" && num2 == "0") {
            return "0";
        }
        string res ="";
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        int carry(0),sum(0);
        for(int i = 0;;i++) {
            int val1 = 0,val2 = 0;
            if(i<num1.size()) {
                val1 = num1[i] - '0';
            }
            if(i<num2.size()) {
                val2 = num2[i] - '0';
            }
            sum = val1 + val2 + carry;
            carry = sum / 10;
            res += '0' + sum % 10;
            if (i >= num1.size() -1 && i >= num2.size() -1 && carry == 0) {
                break;
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};