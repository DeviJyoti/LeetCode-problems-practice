//Mthod-1 using recursion (Time limit exceed)

// class Solution {
// public:
//     int solve(string x,string y,int n,int m){
//         //base condition
//         if(n==0 || m==0) return 0;

//         //choice diagram
//         if(x[n-1]==y[m-1]){
//             return 1+solve(x,y,n-1,m-1);
//         }else{
//             return max(solve(x,y,n,m-1),solve(x,y,n-1,m));
//         }
//     }
//     int longestCommonSubsequence(string text1, string text2) {
//         int n=text1.length();
//         int m=text2.length();
//         return solve(text1,text2,n,m);

//     }
// };


//Mthod-2 using Recursion+memoized version
class Solution {
public:

    int lcs(string &x,string& y,int m,int n,vector<vector<int>>&t){
        if(n<0||m<0) return 0;

        if(t[m][n]!=-1) return t[m][n];

        if(x[m]==y[n])
                return t[m][n]=1+lcs(x,y,m-1,n-1,t);
               return t[m][n]=max(lcs(x,y,m-1,n,t),lcs(x,y,m,n-1,t));

    }
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.length();
        int n=text2.length();
       vector<vector<int>> t(m, vector<int>(n, -1));
        return lcs(text1,text2,m-1,n-1,t);
    }
 };




