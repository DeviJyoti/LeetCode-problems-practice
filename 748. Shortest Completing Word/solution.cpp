class Solution {
public:
    map<char,int>mp;
    void solve(string& s,int&i,int &index,string&ans){
        map<char,int>v;
        for(int i=0;i<s.length();i++){
            if(mp.find(s[i])!=mp.end())
            v[s[i]]++;
        }
        if(mp.size()!=v.size()) return;

        for(auto e1=mp.begin(),e2=v.begin();e1!=mp.end(),e2!=v.end();e1++,e2++){
            if(e1->second>e2->second) return;
        }
        if(ans==""){
            ans=s;
            index=i;
        }else if(ans.length()>s.length()){
            ans=s;
            index=i;
        }
    }
    string shortestCompletingWord(string lp, vector<string>& words) {
        for(int i=0;i<lp.length();i++){
            if(lp[i]>='a' && lp[i]<='z'){
                mp[lp[i]]++;
            }else if(lp[i]>='A' && lp[i]<='Z'){
                char temp=tolower(lp[i]);
                mp[temp]++;
            }
        }
        string ans="";
        int index=-1;
        for(int i=0;i<words.size();i++){
            solve(words[i],i,index,ans);
        }
        return ans;
    }
};
