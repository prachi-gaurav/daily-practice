/* DATE: 15th May 2026
Problem Statement: "The Interstellar Fuel Grid" You are managing a supply fleet of N refueling stations positioned along a single-lane cosmic highway. 
The positions of these stations are given as an array of integers P, sorted in strictly increasing order, where P[i] represents the coordinate of the i-th station.
Due to solar radiation, a ship can only safely jump between two stations if the absolute distance between them is exactly equal to a specific safety constant, K lightyears. 
Your commander wants to know how many distinct pairs of refueling stations exist such that a ship can safely jump directly from one to the other.
Constraints:
2<=N<=10^5
1<=P[i]<=10^9
1<=K<=10^9
All elements in P are distinct and sorted in ascending order.
Memory Limit: 256 MB
Time Limit: 1.0s
*/

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
