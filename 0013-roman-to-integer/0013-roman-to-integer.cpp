class Solution {
public:
    int romanToInt(string s) {
       int sum=0;
        for(int i=0;i<s.size()-1;i++)
        {
            switch(s[i])
            {
                case 'I':
                      if((s[i+1]=='M')||(s[i+1]=='V')||(s[i+1]=='X')||(s[i+1]=='L')||(s[i+1]=='C')||(s[i+1]=='D'))
                          sum-=1;
                    else
                        sum+=1;
                   break;
                case 'V':
                       if((s[i+1]=='X')||(s[i+1]=='L')||(s[i+1]=='C')||(s[i+1]=='D')||(s[i+1]=='M'))
                           sum-=5;
                    else
                        sum+=5;
                    break;
                case 'X':
                     if((s[i+1]=='L')||(s[i+1]=='C')||(s[i+1]=='D')||(s[i+1]=='M'))
                        sum-=10;
                    else
                        sum+=10;
                    break;
                case 'L':
                   if((s[i+1]=='C')||(s[i+1]=='D')||(s[i+1]=='M'))
                        sum-=50;
                    else
                        sum+=50;
                    break;
               case 'C':
                    if((s[i+1]=='D')||(s[i+1]=='M'))
                        sum-=100;
                    else
                        sum+=100;
                    break;    
                case 'D':
                    if(s[i+1]=='M')
                        sum-=500;
                    else
                        sum+=500;
                    break;  
                  case 'M':
                        sum+=1000;
                    break;   
            }
        }
           switch(s[s.size()-1])
            {
                case 'I':
                    sum+=1;
                   break;
                case 'V':
                   
                        sum+=5;
                    break;
                case 'X':
                        sum+=10;
                    break;
                case 'L':
                   
                   
                        sum+=50;
                    break;
               case 'C':
                        sum+=100;
                    break;    
                case 'D':
                  
                        sum+=500;
                    break;  
                  case 'M':
                        sum+=1000;
                    break;   
            }      
        return abs(sum);
    }
};