class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> merge;
        //sort the vector
        sort(intervals.begin(),intervals.end());
        //store first vector of vector in temp
        vector<int> temp = intervals[0];
        //loop through the vector
        for(auto it : intervals){
            if(it[0] <= temp[1])
                temp[1] = max(it[1], temp[1]);
            else{
                merge.push_back(temp);
                temp = it;
            }
        }
        merge.push_back(temp);
        return merge;
    }
};