class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
    sort(arr.begin(),arr.end());
        arr[0]=1;
        for(int i=1;i<arr.size();i++)
        {
            int diff =abs(arr[i-1]-arr[i]);
            if(diff>1)
            {
                arr[i]=arr[i-1]+1;
             }
        }
        return *arr.rbegin();
    }
};