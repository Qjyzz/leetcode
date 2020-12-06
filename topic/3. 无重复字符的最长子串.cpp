/*
给定一个字符串，请你找出其中不含有重复字符的 最长子串 的长度。

 
示例 1:

输入: s = "abcabcbb"
输出: 3 
解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3。
示例 2:

输入: s = "bbbbb"
输出: 1
解释: 因为无重复字符的最长子串是 "b"，所以其长度为 1。
示例 3:

输入: s = "pwwkew"
输出: 3
解释: 因为无重复字符的最长子串是 "wke"，所以其长度为 3。
     请注意，你的答案必须是 子串 的长度，"pwke" 是一个子序列，不是子串。
示例 4:

输入: s = ""
输出: 0
 

提示：

0 <= s.length <= 5 * 104
s 由英文字母、数字、符号和空格组成
*/

// 数组v记录字符个数，遍历字符串，当某个字符数量为2时，代表从start到end的字符串中有重复字符，
// 于是end停止，start开始滑动，直到某个字符的数量恢复1以后，代表此时start到end的字符串中无重复字符
// 实时更新res

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty()) {
            return 0;
        }
        int v[128]={0};
        int res(0),start(0),end(0);
        for(;end<s.size();++end) {
            v[s[end]]++;
            while(v[s[end]] == 2) {
                v[s[start]]--;
                start++;
            }
            res = max(end-start + 1,res);
        }
        return res;
    }
};