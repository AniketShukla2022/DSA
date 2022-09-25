#include <bits/stdc++.h> 
int countDistinctWays(int nStairs) {
    //  Write your code here.
    if (nStairs == 0 || nStairs == 1)
        return 1;
    return countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);
}
