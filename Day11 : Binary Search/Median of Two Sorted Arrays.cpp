class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       vector<int>nums3;
        double d,e,f,g;
        for(int i=0;i<nums1.size();i++)
            nums3.push_back(nums1[i]);
        for(int j=0;j<nums2.size();j++)
            nums3.push_back(nums2[j]);
        sort(nums3.begin(),nums3.end());
        
        if(nums3.size()%2==0){
            d=nums3.size()/2,e=nums3[d],f=nums3[d-1];
            g=(e+f)/2;
        }
        else{
        d=nums3.size()/2;
        g=nums3[d];
        }
        return g;
    }
};
