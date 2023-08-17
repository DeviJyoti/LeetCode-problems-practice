//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	    int ans=0;
	    bool solve(vector<int>& nums,int k,int currSum,int index)
	    {
	        if(currSum!=0 && currSum%k==0)
	        {
	            return true;
	        }
	        
	        if(index==nums.size())
	        return false;
	        
	        
	        
	        return solve(nums,k,currSum,index+1) || solve(nums,k,currSum+nums[index],index+1);
	        
	    }

		int DivisibleByM(vector<int> nums, int k){
		    // Code here
		    if(solve(nums,k,0,0)) return 1;
		    
		    return 0;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		int ans  = ob.DivisibleByM(nums, m);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
