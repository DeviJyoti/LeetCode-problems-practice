class Solution {
public:
    int reverse(int x)
    {
        if(x<-pow(2,31) || x>pow(2,31)-1)return 0;
       vector<int>arr;
        while(x!=0)
        {
            arr.push_back(x%10);
            x=x/10;
        }
        long long int num=0;
        long long int temp;
        for(int i=0;i<arr.size();i++)
        {
            temp=(num*10)+arr.at(i);
            num=temp;
        }
         if(num<-pow(2,31) || num>pow(2,31)-1)return 0;
      return num;
    }
};
