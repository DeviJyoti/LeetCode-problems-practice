class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        //insert jewels into map
        int count=0;
        map<int, string> m;
        for(int i=0;i<jewels.size();i++){
            m[jewels[i]]=jewels[i];
        }
        for(int i=0;i<stones.size();i++){
            if(m.find(stones[i])!=m.end()){
                count++;
            }
        }
        return count;
    }
};
