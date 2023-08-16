//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
void solve(int n,char s[],int i){
    //base condition
    if(i==n){
        s[i] = '\0' ;
        cout << s << " ";
        return ;
    }
    
    
    //choices
    if(s[i-1]=='1'){
        s[i]='0';
        solve(n,s,i+1);
    }
    if(s[i-1]=='0'){
        s[i]='0';
        solve(n,s,i+1);
        s[i]='1';
        solve(n,s,i+1);
    }
    
    
}
    void generateBinaryStrings(int n){
        //Write your code
        char s[n];
        s[0]='0';
        solve(n,s,1);
        s[0]='1';
        solve(n,s,1);
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        obj.generateBinaryStrings(n);
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends
