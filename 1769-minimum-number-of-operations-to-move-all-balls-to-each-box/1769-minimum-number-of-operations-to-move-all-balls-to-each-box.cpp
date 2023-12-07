class Solution {
public:
    vector<int> minOperations(string boxes) {
            //counting places of 1
            vector<int> result;
            int countsumleft=0;
            int countsumright=0;
            int leftone=0;
            int rightone=0;
        for(int i=0;i<boxes.size();i++)
        {
                if(boxes[i]=='1')
                {
                        countsumright+=i;
                        rightone++;
                }
        }
            
            for(int i=0;i<boxes.size();i++)
            {
                    int right = abs(countsumright-(rightone*i));
                    int left = abs( countsumleft-(leftone*i));
                    
                    result.push_back(right+left);
                    if(boxes[i]=='1')
                    {
                          leftone++;
                            rightone--;
                            countsumleft+=i;
                            countsumright-=i;   
                    }
      
            }
          return result;  
    }
};