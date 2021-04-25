class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        unordered_map<int, bool> umap;
        if(nums.size() == 0)
            return nums.size();
        else{
            int p = 0;
            umap[val] = true;
            for(int i=0;i<nums.size();i++){
                if(umap[nums[i]] != 1){
                    nums[p] = nums[i];
                    p++;
                }
            }
            return p;
        }
    }
};
