//
//  main.cpp
//  Unique Paths
//
//  Created by 墨淳 on 17/2/16.
//  Copyright (c) 2017年 墨淳. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

// dp[i][j] 代表走到ij这一点的路径可能数
// dp[i][j]=dp[i-1][j]+dp[i][j-1]
//dp[0][j]==dp[j][0]=1(means 最上面一层和最左边一列，每个格子的可能数都是1


class Solution {
public:
    int uniquePaths(int m, int n) {
        int dp[m][n];
        for(int i=0;i<m;i++){
            dp[i][0]=1;
        }
        
        for(int j=0;j<n;j++){
            dp[0][j]=1;
        }
        
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        
        return dp[m-1][n-1];
        
    }
};


int main(int argc, const char * argv[]) {
    // insert code here...
    
}
