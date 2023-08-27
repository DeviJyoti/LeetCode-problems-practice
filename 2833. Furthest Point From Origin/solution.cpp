class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int r=0;
        int l=0;
        int s=0;
        int ans=0;
        for(int i=0;i<moves.length();i++){
            if(moves[i]=='L') l++;
            if(moves[i]=='R') r++;
        }
        
        int n=moves.length();
        s=n-(l+r); 
        
        if(l==r) ans=s;
        
        else if(l>r) ans=(l-r)+s;
        else ans=(r-l)+s;
        return ans;
    }
};
