class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k > nums.size()) k = k % nums.size();

        if(k == 0 || k == nums.size()) return;
        
        int i = nums.size() - k;
        int j = nums.size() - 1;
        while(i < j){
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;

            i++; j--;
        }

        i = 0;
        j = nums.size() - k - 1;
        while(i < j){
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;

            i++; j--;
        }

        i = 0;
        j = nums.size() - 1;
        while(i < j){
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;

            i++; j--;
        }
    }
};