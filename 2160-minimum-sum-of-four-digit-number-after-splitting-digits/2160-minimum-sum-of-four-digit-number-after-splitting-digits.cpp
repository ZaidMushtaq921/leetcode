class Solution {
public:
    int minimumSum(int num) {
        
        priority_queue<int,vector<int>, greater<int>> p;
        
    while(num!=0)
    {
        p.push(num%10);
        num=num/10;
    }
     int num1=0;
        int num2=0;
        num1=p.top();
        p.pop();
        num2=p.top();
        p.pop();
        num1=(num1*10)+p.top();
        p.pop();
         num2=(num2*10)+p.top();
        p.pop();
        
        return num1+num2;
    }
};