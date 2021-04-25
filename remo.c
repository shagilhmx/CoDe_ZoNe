class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    unordered_map<int, bool> umap;
        if(nums.size() == 0)
            return nums.size();
        else{
            int p = 0;
            for(int i=0;i<nums.size();i++){
                if(umap.find(nums[i]) == umap.end()){
                    umap[nums[i]] = true;
                    nums[p] = nums[i];
                    p++;
                }
            }
            return p;
        }
    }
};
