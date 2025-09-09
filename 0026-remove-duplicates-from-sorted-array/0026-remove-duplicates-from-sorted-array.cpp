class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;  // if array is empty

        int i = 0; // slow pointer
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {   // found a new unique element
                i++;
                nums[i] = nums[j];      // overwrite next position
            }
        }
        return i + 1;  // length of unique array
    }
        
};