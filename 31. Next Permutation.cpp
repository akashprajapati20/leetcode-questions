class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        
        // Find the first element from the right that is smaller(nums[i]) than its adjacent(nums[i+1]) element
        int i = n - 2;
        while (i >= 0 && nums[i] >= nums[i+1]) {
            i--;
        }
        
        // If such an element(nums[i]) is found, find the smallest element(nums[j]) to the right of it(nums[i]) that is just larger than it(nums[i]).
        if (i >= 0) {
            int j = n - 1;
            while (j >= 0 && nums[i] >= nums[j]) {
                j--;
            }
            // Swap the two elements
            swap(nums[i], nums[j]);
        }
        
        // Reverse the subarray to the right of the swapped element
        reverse(nums.begin() + i + 1, nums.end());
    }
};




Approach :-

arr : [2,5,8,4,7,6,3] -> nextPermutation : [2,5,8,6,3,4,7]

1. In below image arr[i] and arr[i+1] = 4 and 7. so, i = 3.
2. In below image arr[i] and arr[j] = 4 and 6. So, j = 5.
3. swap arr[i] and arr[j]. So, our new array will be [2,5,8,6,7,4,3]
4. reverse i+1 to n-1. So, our final array will be [2,5,8,6,3,4,7] which is the next permutaion of given array 

**NOTE : THE ABOVE 4 STEPS IS SAME AS BELOW EXPLAINED APPROACH.**
                             8
                            / \
                           /   \       7
                          /     \     / \
                         /       \   /   6
                        5         \ /     \
                       /           4       \
                      /                     \
                     /                       3
                    /
                   2

                   