class Solution 
{
public:
    int findJudge(int N, vector<vector<int>>& trust) 
    {
       map<int,int>m1,m2;
        for(int i = 1; i <= N ; i++)
        {
            m1[i]=0;
            m2[i]=0;
        }
       for(int i = 0; i < trust.size() ;i++)
       {
             m1[trust[i][0]]++;
             m2[trust[i][1]]++;
       }
       for(int i=1; i <= N; i++)
       {
           if( m2[i] == N-1 && m1[i] == 0)
                    return i;
       }
    return -1;
    }
};
