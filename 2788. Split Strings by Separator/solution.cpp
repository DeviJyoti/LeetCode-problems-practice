class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char sep) {
        string str="";
        vector<string> vec;
        for(auto word:words)
        {
            for(auto ch:word)
            {
                if(ch==sep)
                {
                    if(str!="")
                    {
                        vec.push_back(str);
                        str="";
                    }
                }
                else
                    str+=ch;
            }
            if(str!="")
                    {
                        vec.push_back(str);
                str="";
                    }
        }

        return vec;
    }
};
