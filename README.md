复杂度
时间 O(NM) 空间 O(NM)

思路
因为要走最短路径，每一步只能向右方或者下方走。所以经过每一个格子路径数只可能源自左方或上方，这就得到了动态规划的递推式，我们用一个二维数组dp储存每个格子的路径数，则dp[i][j]=dp[i-1][j]+dp[i][j-1]。最左边和最上边的路径数都固定为1，代表一直沿着最边缘走的路径。
