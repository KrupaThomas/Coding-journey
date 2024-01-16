/*Given an m x n 2D binary grid grid which represents a map of '1' s (land) and '0' s (water),
 return the number of islands. An island is surrounded by water and is formed by
  connecting adjacent lands horizontally or vertically. 
You may assume all four edges of the grid are all surrounded by water*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
private:
    void bfs(int row, int col, vector<vector<int>>& vis, vector<vector<char>>& grid) {
        vis[row][col] = 1;
        queue<pair<int, int>> q;
        q.push({row, col});
        int n = grid.size();
        int m = grid[0].size();

        while (!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            int drow[] = {-1, 0, 1, 0};
            int dcol[] = {0, 1, 0, -1};

            for (int i = 0; i < 4; ++i) {
                int nrow = row + drow[i];
                int ncol = col + dcol[i];
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                    grid[nrow][ncol] == '1' && !vis[nrow][ncol]) {
                    vis[nrow][ncol] = 1;
                    q.push({nrow, ncol});
                }
            }
        }
    }

public:
    int Island_num(vector<vector<char>>& grid) {
        int n = grid.size();
        if (n == 0) return 0;
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));
        int islandCount = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == '1' && !vis[i][j]) {
                    bfs(i, j, vis, grid);
                    islandCount++;
                }
            }
        }
        return islandCount;
    }
};

int main() {
    Solution sol;
    vector<vector<char>> grid = {
        {'1', '1', '1', '1', '0'},
        {'1', '1', '0', '1', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '0', '0', '0'}
    };

    cout << "The number of islands are : " << sol.Island_num(grid) << endl;
    return 0;
}
