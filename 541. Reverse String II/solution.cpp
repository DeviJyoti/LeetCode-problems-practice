class Solution {
public:
    string reverseStr(string s, int k) {
        int l=0,h=k-1;
        
        while(l<s.length()){
            int start=l;
            if(h>=s.length())h=s.length()-1;
            while(l<=h){
                swap(s[l],s[h]);
                l++;
                h--;
            }
            l=start+2*k;
            h=l+k-1;
        }
        return s;
        
    }
};
