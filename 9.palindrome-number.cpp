/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(int x)
    {
        long int num = 0;
        int temp = x;

        while (temp > 0)
        {
            num = num * 10 + (temp % 10);
            temp = temp / 10;
        }

        if (num == x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
// @lc code=end
