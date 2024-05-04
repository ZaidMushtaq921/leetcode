class Solution {
public:
    int maxDepth(string s) {
        int max=0;
        int counter=0;
        stack<char> stk;
        for(auto c:s)
        {
            if(c=='(' || c==')')
            {
                stk.push(c);
            }
        }
        while(!stk.empty()){
            char c = stk.top();
            stk.pop();
            if(c==')')
            {
                counter++;
                if(max<counter)
                    max=counter;
            }
            else{
                counter--;
            }
        }
        return max;
    }
};