# O(n^3) solution


class Solution {
public:
    int numTeams(vector<int>& rating)
    {
        int count=0;
        int n = rating.size();
        for(int i =0; i< n-2; i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                for(int k = j+1; k<n ; k++)
                {
    if( ( rating[i] > rating[j] ) && ( rating[j] > rating[k]) || (rating[i] < rating[j]) && ( rating[j]  < rating[k] )  )       
                count++;
                }
            }
        }
      return count;  
    }
};




#O(n^2) solution 


class Solution {
public:
    int numTeams(vector<int>& rating)
    {
        int n = rating.size();
        int before_greater[n];
        int before_lesser[n];
        int after_greater[n];
        int after_lesser[n];
        for( int i = 0; i<n ; i++)
        {
            before_greater[i] =0;
            before_lesser[i] = 0;
            after_lesser[i] = 0;
            after_greater[i] = 0;
        }
        for(int i = 0; i< n; i++)
        {
            for(int j =i+1; j<n; j++)
            {
                if(rating[i] < rating[j])
                        after_greater[i]++;
                else
                        after_lesser[i]++;
            }
        }
         for(int i = 0; i< n; i++)
        {
            for(int j = 0; j<i; j++)
            {
                if(rating[i] > rating[j])
                        before_lesser[i]++;
                else
                        before_greater[i]++;
            }
        }
        int count=0;
        for(int i=0; i< n ;i++)
                count += (before_greater[i]*after_lesser[i]) + (before_lesser[i]*after_greater[i]);
        
        return count;

    }
    
};
