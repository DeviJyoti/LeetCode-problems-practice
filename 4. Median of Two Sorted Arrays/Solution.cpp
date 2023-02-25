class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        int i=0; int j=0;int k=0;
//       int m=nums1.length;
//        int n=nums2.length;
    
        int m=nums1.size();
        int n=nums2.size();
        
         int nums3[m+n];
        while(i<m && j<n)
        {
            if(nums1[i]<nums2[j])
            {
                nums3[k]=nums1[i];
                    i++;
            }
            else
            {
                nums3[k]=nums2[j];
                    j++;
                
            }
            k++;
        }
        while(i<m)
        {
            nums3[k]=nums1[i];
            i++;
            k++;
        }
            while(j<n)
        {
            nums3[k]=nums2[j];
            j++;
            k++;
        }
        
        if((m+n)%2!=0)
        {
             return nums3[(m+n)/2];
        }
        else
        {
            int x=(m+n)/2;
            double p=nums3[x];
            double q= nums3[x-1];
            return (p+q)/2;
            
        }
    }
};
