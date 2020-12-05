/*
给定一个非负整数 numRows，生成杨辉三角的前 numRows 行。
*/

// 利用resize提前开辟空间

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(numRows);
        for(int i = 0 ; i < numRows; ++i) {
            res[i].resize(i+1);
            for(int j = 0;j <= i;++j) {
                if(j == 0 || j == i) {
                    res[i][j] = 1;
                } else {
                    res[i][j] = res[i-1][j-1] + res[i-1][j];
                }
            }
        }
        return res;
    }
};

// push_back 依次填充

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(numRows);
        for(int i = 0 ; i < numRows; ++i) {
            for(int j = 0;j <= i;++j) {
                if(j == 0 || j == i) {
                    res[i].push_back(1);
                } else {
                    res[i].push_back(res[i-1][j-1] + res[i-1][j]);
                }
            }
        }
        return res;
    }
};