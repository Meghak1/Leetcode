Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

There may be duplicates in the original array.

Note: An array A rotated by x positions results in an array B of the same length such that A[i] == B[(i+x) % A.length], where % is the modulo operation


class Solution {
public:
    bool check(vector<int>& nums) {
     vector <int> original=nums;
     sort(nums.begin(), nums.end());
     for (int i = 0; i < nums.size(); i++) {
            rotate(nums.begin(), nums.begin() + 1, nums.end());
            if (original== nums) { 
                return true;
            }
        }

        return false;  
    }
};
