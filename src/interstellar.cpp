int countValidJumps(const std::vector<int>& P, int K)
{
    int n=P.size(); int diff=0,i=0,j=0,c=0;
    while(j<n)
    {
        diff=P[j]-P[i];
        if(diff<K)
        {j++;
        }
        else if(diff>K)
        {i++;
        if(i==j)
        {j++;}}
        else
        {i++;j++;c++;}
        }
    }
    } return c;
};