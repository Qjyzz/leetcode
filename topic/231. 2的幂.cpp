/*
给定一个整数，编写一个函数来判断它是否是 2 的幂次方。

示例 1:

输入: 1
输出: true
解释: 20 = 1
示例 2:

输入: 16
输出: true
解释: 24 = 16
示例 3:

输入: 218
输出: false
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)
            return false;
        bitset<32> b(n);
        if(b.count() == 1)
            return true;
        return false;
    }
};

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 0) {
            return false;
        }
        long int temp = n;
        return (temp & (temp - 1)) == 0 ;
    }
};

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 0) {
            return false;
        }
        while(n % 2 == 0) {
            n/=2;
        }
        return n == 1;
    }
};