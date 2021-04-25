class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    unordered_map<int, bool> umap;
        if(nums.size() == 0)
            return nums.size();
        else{
            int count = 0;
            for(int i=0;i<nums.size();i++){
                if(umap.find(nums[i]) == umap.end()){
                    umap[nums[i]] = true;
                    count++;
                }
            }
            int k=0;
            int end = nums[nums.size()-1], start = nums[0];
            for(int i=start;i<=end;i++){
                if(umap[i] == 1){
                    nums[k] = i;
                    k++;
                }
            }
            return count;
        }
    }
};
