class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> rotated(n);

        for (int i = 0; i < n; i++){
            rotated[(k + i) % n] = nums[i];
        }
        
        nums = rotated;
    }
};