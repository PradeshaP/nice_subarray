class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
       int p=atMost(nums, k) - atMost(nums, k - 1);
        return p;
    }
    int atMost(vector<int>& nums, int k)
    {
        int l=0,r=0,n=nums.size(),count=0,sum=0;
        while(r<n)
        {
            sum=sum+(nums[r]%2);
            while(sum>k)
            {
                sum=sum-(nums[l]%2);
                l++;
            }
            count=count+(r-l+1);
            r++;
        }
        return count;
    }
};