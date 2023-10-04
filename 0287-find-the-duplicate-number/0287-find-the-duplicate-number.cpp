class Solution {
public:
    int findDuplicate(vector<int> &arr) {
        int f=0;
        int l= arr.size()-1;
        sort(arr.begin(),arr.end());
        while(f<l)
        {
            int mid=(f+l)/2;
            if(arr[f]==arr[l])
            {
                return arr[f];
            }
            if(arr[mid]>=mid+1)
            {
                f=mid+1;
            }
            else
                l=mid;
        }
        return arr[f];
    }
};