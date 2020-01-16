/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
        int c = 1;
        while(i >= 0)
        {
            if (!c)
                break;
            digits[i] += c;
            c = digits[i] / 10;
            digits[i] = digits[i]%10;
            i--;
        }
        if (c)
        digits.insert(digits.begin(),1);
        return digits;
    }
};
// @lc code=end

