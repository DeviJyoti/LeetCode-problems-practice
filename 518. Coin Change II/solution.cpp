class Solution {
public: 
    // int solve(vector<int>&coins,int amount,int n){
    //     //base condition
    //     if(amount==0) return 1;
    //     if(n==0) return 0;
    
    //     //choices
    //     if(coins[n-1]<=amount){
    //     return solve(coins,amount-coins[n-1],n)+solve(coins,amount,n-1);
    //     }else{
    //          return solve(coins,amount,n-1);
    //     }
        
    // }
    int change(int w, vector<int>& coins) {
       //method-1
       // return solve(coins,amount,coins.size());

       //method-2
       int n=coins.size();
       int dp[n+1][w+1];

       //initialization
       for(int i=0;i<n+1;i++){
           for(int j=0;j<w+1;j++){
               if(i==0 )dp[i][j]=0;
               if(j==0) dp[i][j]=1;
           }
       }
       //iterative 
       for(int i=1;i<n+1;i++){
           for(int j=1;j<w+1;j++){
               if(coins[i-1]<=j){
                   dp[i][j]=dp[i][j-coins[i-1]]+dp[i-1][j];
               }else{
                   dp[i][j]=dp[i-1][j];
               }
           }
       }
       return dp[n][w];
    }
};
