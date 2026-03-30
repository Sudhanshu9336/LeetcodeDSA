class Solution {
public:
void subset(int index,vector<int>&nums,vector<int>&ds,vector<vector<int>>&result){
    if(index>=nums.size()){
        result.push_back(ds);
        return ;
    }
    //include
    ds.push_back(nums[index]);
    subset(index+1,nums,ds,result);
    ds.pop_back();
    //maine pahle index ko move kiya taki mai i ko aise jagah pe le ja saku ki mere final result ke ander frepeated ans na aaye // 
    int i=index+1;
    while(i<nums.size()&&nums[i]==nums[i-1]){
        i++; 
    }
    subset(i,nums,ds,result);

}


    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ds;
        vector<vector<int>>result;
        subset(0,nums,ds,result);
        return result;
    }
};