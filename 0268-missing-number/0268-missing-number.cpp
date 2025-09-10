class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int total = n * (n + 1) / 2;  // sum of numbers from 0 to n
        int sumNums = 0;
        for (int num : nums) sumNums += num;  // sum of elements in the array
        return total - sumNums;  // the difference is the missing number
    }
};
