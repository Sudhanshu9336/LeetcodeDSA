class Solution {
public:
int solve(int amount,vector<int>&coins,int index,vector<vector<int>>&dp){

   if (index == coins.size()) {
    return (amount == 0) ? 1 : 0;
}
if (dp[index][amount] != -1) return dp[index][amount];

    int take=0;
    if(amount>=coins[index]){
        take=solve(amount-coins[index],coins,index,dp);
    }
    int nottake=solve(amount,coins,index+1,dp);
    return dp[index][amount]=take+nottake;
}
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        return solve(amount,coins,0,dp);
    }
};
// class Solution {
// public:
// void solve(int amount,vector<int>coins,int index,int& count){
//     if(index==coins.size()){
//         if(amount==0)count++;
//         return;
//     }
//     if(index>coins.size())return ;
//     if(coins[index]<=amount){
//     solve(amount-coins[index],coins,index,count);
//     }
//     solve(amount,coins,index+1,count);
// }
//     int change(int amount, vector<int>& coins) {
//         int count=0;
//         solve(amount,coins,0,count);
//         return count;
        
//     }
// };