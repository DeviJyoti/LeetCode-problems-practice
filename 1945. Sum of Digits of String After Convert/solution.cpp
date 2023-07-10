class Solution {
public:
    int getLucky(string s, int k) {
       int c=0;
            for(auto i:s){
                int x=i-96;
                
                if(x<10){
                    c=c+x;
                }else{
                    c=c+(x%10);
                    x/=10;
                    c=c+x;
                }
            }
        if(k==1){
            return c;
        }else{
            for(int j=0;j<k-1;j++){
                int y=0;
                while(c){
                    y=y+(c%10);
                    c/=10;
                }
                c=y;
            }
            return c;
        }
        return -1;
        
    }
};
