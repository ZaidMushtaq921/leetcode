// class Solution {
// public:
//     vector<string> summaryRanges(vector<int>& nums) {
//             vector<string> ans;
//         int a=0;
//         int b=1;
//         while(b<nums.size())
//         {
            
           
//               if(nums[b+1]==(nums[b]+1))
//             {
//                 b++;
//             } 
                 
//             else
//             {
//                 if(a==b)
//                 {
//                     string s = to_string(nums[a]);
//                     ans.push_back(s);
//                 }
//                 else
//                 {
//                       string s="";
//                     s.push_back(nums[a]+'0');
//                     s.push_back('-');
//                    s.push_back('>');
//                   s.push_back(nums[b]+'0');
//                     ans.push_back(s);
//                 }
                
//                 a = b = b+1;
                
//             }
             
            
//         }
        
//        return ans; 
        
//     }
// };
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int a = 0;
        int b = 0;  // Initialize b to 0
        while (b < nums.size()) {
            // Change the condition from b+1 to b
            if (b + 1 < nums.size() && nums[b + 1] == (nums[b] + 1)) {
                b++;
            } else {
                if (a == b) {
                    ans.push_back(to_string(nums[a]));
                } else {
                    // Use string concatenation for the range
                    ans.push_back(to_string(nums[a]) + "->" + to_string(nums[b]));
                }
                a = b = b + 1;
            }
        }
        return ans;
    }
};
