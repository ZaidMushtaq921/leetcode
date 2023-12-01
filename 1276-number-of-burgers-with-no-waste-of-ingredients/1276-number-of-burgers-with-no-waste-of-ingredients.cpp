class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
           int total_jumbo=0;
            int total_small=0;
            if(cheeseSlices==0 && tomatoSlices==0)
                    return {total_jumbo,total_small};
            if(tomatoSlices%2!=0 ||cheeseSlices==0 || tomatoSlices==0)
                    return {};
            while(tomatoSlices!=0&&cheeseSlices!=0)
            {
                    if(tomatoSlices/2==cheeseSlices)
                    {
                            total_small+=cheeseSlices;
                            tomatoSlices=0;
                            cheeseSlices=0;
                            
                    }
                    else
                    {
                            total_jumbo+=1;
                       tomatoSlices-=4;
                            cheeseSlices-=1;     
                    }
            }
            if(tomatoSlices==0&&cheeseSlices==0)
            return {total_jumbo,total_small};
            return {};
    }
};