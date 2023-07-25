class Solution {
public:
    char repeatedCharacter(string s) {
        //APPROACH-1
        // int mini = INT_MAX;
        // for(int i=0;i<s.size();i++){
        //     for(int j=i+1;j<s.size();j++){
        //         if(s[i]==s[j]){
        //             mini=min(mini,j);
        //         }
        //     }
        // }
        // return s[mini];

        //APPROACH-2

        unordered_map<int,char>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            if(mp[s[i]]==2) return s[i];
        }
        return -1;
    }
};
